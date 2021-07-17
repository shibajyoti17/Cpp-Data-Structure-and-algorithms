
/* The program is used to search whether a pair exists for a certain
   sum.

   Inputs: -> The number of items in the array
           -> The elements of the array separated by a new line.
           -> The desired sum of the pair.
   Output: -> Output is printed whether a pair is found or not.
*/
// 07-17-21 Created a new program
#include<iostream>
using namespace std;
bool isPair(int arr[], int arr_size, int sum) {
    int low = 0, high = arr_size-1;
    while(low<high) {
        if(arr[low] + arr[high] == sum) return true;
        else if(arr[low] + arr[high] > sum) high--;
        else low++;
    }
    return false;
}

int main() {
    cout << "Enter the array size: " << endl;
    int arr_size, sum;
    cin >> arr_size;
    int arr[arr_size];
    cout << "Enter the elements separated by a new line; " << endl;
    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }
    cout << "The array is: " << endl;
    cout << "[ ";
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i];
        if(i < arr_size-1) cout << ", ";
    }
    cout << " ]" << endl;
    cout << "Enter the sum of the pair: " << endl;
    cin >> sum;
    if(isPair(arr,arr_size,sum)) cout << "Pair of the given sum is found in the array" << endl;
    else cout << "Pair of the given sum is not found in the array" << endl;
    return 0;
}
