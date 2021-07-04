/* This program is used to return the total
   occurence of an item in a binary array input by the
   user
   INPUTS: -> The number of elements in the binary array
           -> All elements seperated by a newline
   OUTPUTS: -> Total count of  1's 
               in the input array
*/
//////////// Maintenance History ////////////////////////////////

//07-04-21 Created the new program

////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int firstOccurence(int arr[], int arr_size) {
    int low = 0, high = arr_size -1, mid = 0;
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] < 1) {
            low++;
        }
        else if(arr[mid] > 1) {
            high--;
        }
        else {
            if(mid == 0 or arr[mid-1] != 1) {
                return mid;
            }
            else {
                high--;
            }
        }
    }
    return -1;
}

int lastOccurence(int arr[], int arr_size) {
    int low = 0, high = arr_size -1, mid = 0;
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] < 1) {
            low++;
        }
        else if(arr[mid] > 1) {
            high--;
        }
        else {
            if(mid == 0 or arr[mid+1] != 1) {
                return mid;
            }
            else {
                low++;
            }
        }
    }
    return -1;
}

int main(){
    int arr_size, item, result;
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
    if(firstOccurence(arr,arr_size) == -1 || lastOccurence(arr,arr_size) == -1){
	    result = 0;
    }
    else{
	    result =  lastOccurence(arr,arr_size) - firstOccurence(arr,arr_size) + 1;
    }
    cout << endl << "The total number of 1's in the binary array is: " << result << endl;
    return 0;
}
