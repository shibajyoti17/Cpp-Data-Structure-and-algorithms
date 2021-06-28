#include<iostream>
#include<algorithm>
using namespace std;
int minDiffTowerHeight(int arr[], int n, int k) {
    sort(arr,arr+n);
    int ans = arr[n-1] - arr[0];
    int largest = arr[n-1] -k;
    int smallest = arr[0] + k;
    int mi, ma;
    for(int i = 0; i < n-1; i++) {
        mi = min(smallest, arr[i+1] - k);
        ma = max(largest, arr[i] + k);
        if(mi < 0) continue;
        ans = min(ans, ma-mi);
    }
    return ans;
}
int main() {
    cout << "Enter the number of elements in the array: " << endl;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the factor for changing tower size: " << endl;
    cin >> k;
    cout << "The minimum difference between the heights of the maximum and minimum tower is: " << minDiffTowerHeight(arr,n,k) << endl;
    return 0;
}
