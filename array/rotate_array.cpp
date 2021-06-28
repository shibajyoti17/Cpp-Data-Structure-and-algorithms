#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void rotateArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        swap(arr[0], arr[i]);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotateArray(arr,n);
    cout << "The reversed array is: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
