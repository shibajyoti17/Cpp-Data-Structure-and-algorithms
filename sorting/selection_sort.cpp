/* This program is used to sort an array using
   selection sort algorithm
   INPUTS: -> The number of elements in the array
           -> All elements seperated by a newline
   OUTPUTS: -> Sorted array using selection sort algorithm
*/
//////////// Maintenance History ////////////////////////////////

//08-03-21 Created the new program

////////////////////////////////////////////////////////////////
#include<iostream>
#include<algorithm>
using namespace std;
void selectionSort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		int min_index = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		swap(arr[min_index], arr[i]);
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
    selectionSort(arr,arr_size);
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

