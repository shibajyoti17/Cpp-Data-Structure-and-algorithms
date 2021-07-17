/* This program is used to return the index
   of an item in a rotated array input by the
   user
   INPUTS: -> The number of elements in the array
           -> All elements seperated by a newline
	   -> The item to be searched
   OUTPUTS: -> Last index(0-based) of the searched element
               in the input array
*/
//////////// Maintenance History ////////////////////////////////

//07-06-21 Created the new program

////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int binarySearch(int arr[], int arr_size, int item) {
    int low = 0, high = arr_size -1, mid = 0;
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] == item) return mid;
        if(arr[mid] > arr[low]) {
            if(item >= arr[low] && item < arr[mid]) high = mid - 1;
            else low = mid + 1;
        }
        else {
            if(item > arr[mid] && item <= arr[high]) low = mid + 1;
            else high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr_size, item;
    cout << "Enter the size of an array: " << endl;
    cin >> arr_size;
    int arr[arr_size];
    cout << "Enter the elements of an array seperated by a new line: " << endl;
    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }
    cout << "The input array is: " << endl;
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Enter the item to be searched: " << endl;
    cin >> item;
    cout << "The first occurence of the element " << item << " is at index " << binarySearch(arr,arr_size,item) << endl;
    return 0;
}


