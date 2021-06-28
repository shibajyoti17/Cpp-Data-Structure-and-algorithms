#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0, high = n-1;
    while(low < high) {
        if( arr[low] < 0) {
            swap(arr[low], arr[high]);
            high--;
        }
        else {
            low++;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
