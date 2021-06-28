/* The program is used to search an element in a fixed size array using
   binary search.
   
   Inputs: -> The item which need to be searched.
   Output: -> Returns the index(1-based) of the element in the fixed size array
*/
// 06-28-21 Fixed the array order to sorted, since this is a binary search.
#include<iostream>
using namespace std;
int binarySearch(int arr[], int item, int arr_size) {
    int low = 0, high = arr_size - 1;
    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] == item) {
            return mid;
        }
        else if(arr[mid] < item) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[7] = {2,43,65,120,170,190,220};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "The fixed size array is: " << endl;
    for(int i = 0; i < arr_size; i++){
	cout << arr[i] << " ";
    }
    cout << "\n" << "Enter the item which you want to search: " << endl;
    int item;
    cin >> item;
    cout << "Index of Element: " << binarySearch(arr,item,arr_size) + 1 << endl;
    return 0;
}
