#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int kSmallestElement(int arr[], int n, int k) {
    sort(arr,arr+n);
    return arr[k-1];
}
int main() {
    int n, k;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the smallest number you want: " << endl;
    cin >> k;
    string name;
    switch(k) {
    case 1:
        name = "st";
        break;
    case 2:
        name = "nd";
        break;
    case 3:
        name = "rd";
        break;
    default:
        name = "th";
        break;
    }
    cout << "The " << k << name << " smallest element is: " << kSmallestElement(arr,n,k) << endl;
    return 0;
}
