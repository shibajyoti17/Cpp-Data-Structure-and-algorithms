/* This program is used to return the first
   occurence of an item in an array input by the
   user
   INPUTS: -> The number of elements in the array
           -> All elements seperated by a newline
	   -> The item to be searched
   OUTPUTS: -> Last index(0-based) of the searched element
               in the input array
*/
//////////// Maintenance History ////////////////////////////////

//06-30-21 Created the new program

////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int binarySearch(int arr[], int arr_size, int item) {
    int low = 0, high = arr_size -1, mid = 0;
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] < item) {
            low++;
        }
        else if(arr[mid] > item) {
            high--;
        }
        else {
            if(mid == 0 or arr[mid+1] != item) {
                return mid;
            }
            else {
                low++;
            }
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

    
