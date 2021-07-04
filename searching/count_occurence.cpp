/* This program is used to return the total count of
   occurence of an item in an array input by the
   user
   INPUTS: -> The number of elements in the array
           -> All elements seperated by a newline
	   -> The item to be searched
   OUTPUTS: -> Total count of the searched element
               in the input array
*/
//////////// Maintenance History ////////////////////////////////

//07-04-21 Created the new program

////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int lastOccurence(int arr[], int arr_size, int item) {
    int low = 0, high = arr_size -1, mid = 0, count = 0;
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

int firstOccurence(int arr[], int arr_size, int item) {
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
            if(mid == 0 or arr[mid-1] != item) {
                return mid;
            }
            else {
                high--;
            }
        }
    }
    return -1;
}

int main(){
    int arr_size, item, result = 0;
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
    cout << endl << "Enter the element to be searched: " << endl;
    cin >> item;
    if(lastOccurence(arr,arr_size,item) - firstOccurence(arr,arr_size,item) >= 0) result = lastOccurence(arr,arr_size,item) - firstOccurence(arr,arr_size,item) + 1;
    if(lastOccurence(arr,arr_size,item) == -1 || firstOccurence(arr,arr_size,item) == -1) result = 0;
    cout << "The number of times the element appeared in the array is: " << result << endl;
    return 0;
}
