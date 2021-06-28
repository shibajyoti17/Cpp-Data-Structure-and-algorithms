#include<iostream>
using namespace std;
int findMax(int arr[], int n) {
    int res = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > res) {
            res = arr[i];
        }
    }
    return res;
}
int findMin(int arr[], int n) {
    int res = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < res) {
            res = arr[i];
        }
    }
    return res;
}
int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Maximum Element in array: " << findMax(arr,n) << endl;
    cout << "Minumum Element in array: " << findMin(arr,n) << endl;
    return 0;
}

