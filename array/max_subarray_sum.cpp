#include<iostream>
using namespace std;
// Maximum sub-array sum problem using Kadane's algorithm
int maxSubarraySum(int arr[], int n) {
    int sum = arr[0], max_sum = arr[0];
    for(int i = 1; i < n; i++) {
        sum += arr[i];
        max_sum = (max_sum > sum)?max_sum:sum;
    }
    return max_sum;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The maximum sub-array sum is: " << maxSubarraySum(arr,n) << endl;
    return 0;
}
