#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements between 0,1 & 2:  " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0, high = n-1;
    int mid = 0;
    while(mid <= high) {
        switch(arr[mid]) {
        case 0:
            swap(arr[low],arr[mid]);
            low++;
	    mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
