/* The program is used to search whether a triplet exists for a certain
   sum.

   Inputs: -> The number of items in the array
           -> The elements of the array separated by a new line.
           -> The desired sum of the triplet.
   Output: -> Output is printed whether a triplet is found or not.
*/
// 07-17-21 Created a new program
#include<iostream>
using namespace std;
bool isPair(int arr[], int low, int high, int sum) {
    while(low<high) {
        if(arr[low] + arr[high] == sum) return true;
        else if(arr[low] + arr[high] > sum) high--;
        else low++;
    }
    return false;
}
bool isTriplet(int arr[], int arr_size, int sum) {
    for(int i = 0; i < arr_size; i++) {
        if(isPair(arr,i+1,arr_size-1,sum-arr[i])) return true;
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
    if(isTriplet(arr,arr_size,sum)) cout << "Triplet of the given sum is found in the array" << endl;
    else cout << "Triplet of the given sum is not found in the array" << endl;
    return 0;
}
