#include<iostream>
using namespace std;
bool binarySearch(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low <= high){
    	int mid = low + (high - low)/2;
	if(arr[mid] == x){
		return true;
	}
	if(arr[mid] < x){
		low = mid + 1;
	}
	else{
		high = mid - 1;
	}
    }
    return false;
}
int doUnion(int a[], int n, int b[], int m){
    int count = 0;
    int tot = n + m;
    int arr[n+m] = {-1};
    for(int i = 0; i < n; i++)
    {   bool found_first = binarySearch(arr,tot,a[i]);
        if(found_first == false){
            arr[i] = a[i];
            count++;
        }
    }
    for(int j = 0; j < m; j++)
    {
        bool found = binarySearch(arr,n+m,b[j]);
        if(found == false) {
            count++;
        }
    }
    return count;
}
int main(){
    int n, k;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cin >> k;
    int arr[n], arr2[k];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int j = 0; j < k; j++) {
        cin >> arr2[j];
    }
    cout << "The number of elements in union is: " << doUnion(arr,n,arr2,k) << endl;
    return 0;
}
