/* The program is used to sort a given array
 * using insertion sort algorithm.
 * INPUTS: -> size of the input array.
 *         -> elements of the array separated by a
 *            new line.
 * OUTPUT: -> returns the array in a sorted order.
 */
//********Maintainance History*******************
//08-04-21 Created new program
//***********************************************
#include<iostream>
using namespace std;
void insertionSort(int arr[], int arr_size) {
    for(int i = 1; i < arr_size; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[i] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int arr_size;
    cout << "Enter the size of the array: " << endl;
    cin >> arr_size;
    int arr[arr_size];
    cout << "Enter the elements of the array separated by a new line: " << endl;
    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }
    cout << "The input array is: " << endl;
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    insertionSort(arr,arr_size);
    cout << endl << "The sorted array is: " << endl;
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

