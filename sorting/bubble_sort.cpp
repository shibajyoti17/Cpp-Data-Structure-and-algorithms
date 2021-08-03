/* This program is used to sort an array using
   bubble sort algorithm
   INPUTS: -> The number of elements in the array
           -> All elements seperated by a newline
   OUTPUTS: -> Sorted array using bubble sort algorithm
*/
//////////// Maintenance History ////////////////////////////////

//08-03-21 Created the new program

////////////////////////////////////////////////////////////////
#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		bool swapped = false;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false) break;
	}
}

int main() {
    int arr_size;
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
    cout << endl << "The sorted array is: " << endl;
    bubbleSort(arr,arr_size);
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

