/* The program is used to search a peak element in an array using
   binary search.
   
   Inputs: -> The number of items in the array
           -> The elements of the array separated by a new line.
   Output: -> Returns one of the peak elements in the user provided array
*/
// 07-07-21 Created a new program
#include<iostream>
using namespace std;
int findPeak(int arr[], int arr_size) {
    int low = 0, high = arr_size - 1;
    while(low <= high) {
        int mid = (low+high)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == arr_size - 1 || arr[mid+1] <= arr[mid])) {
            return mid;
        }
        if(mid > 0 && arr[mid] <= arr[mid-1]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
int main() {
    cout << "Enter the array size: " << endl;
    int arr_size;
    cin >> arr_size;
    int arr[arr_size];
    cout << "Enter the elements separated by a new line; " << endl;
    for(int i = 0; i < arr_size; i++){
	cin >> arr[i];
    }
    cout << "The array is: " << endl;
    cout << "[ ";
    for(int i = 0; i < arr_size; i++){
	cout << arr[i];
	if(i < arr_size-1) cout << ", ";
    }
    cout << " ]";
    if(findPeak(arr,arr_size) == -1) cout << endl << "No Peak element found in the array" << endl;
    else cout << endl << "Peak Element in the given array is: " << arr[findPeak(arr,arr_size)] << endl;
    return 0;
}
