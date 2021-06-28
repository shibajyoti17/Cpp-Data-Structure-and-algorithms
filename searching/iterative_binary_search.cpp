#include<iostream>
using namespace std;
int binarySearch(int arr[], int item, int arr_size) {
    int low = 0, high = arr_size - 1;
    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] == item) {
            return mid;
        }
        else if(arr[mid] < item) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[7] = {2,67,43,34,21,643,59};
    int arr_size = sizeof(arr) / sizeof(int);
    int item;
    cin >> item;
    cout << "Index of Element: " << binarySearch(arr,item,arr_size) + 1 << endl;
    return 0;
}
