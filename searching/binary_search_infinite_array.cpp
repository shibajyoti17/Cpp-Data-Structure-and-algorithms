/* The program is used to search an element in an infinite sized array using
   binary search. Although implementation is not practical, I have done it
   for a fixed size array, but algorithm will work for array of any size.
   
   Inputs: -> The item which need to be searched.
   Output: -> Returns the index(1-based) of the element in the fixed size array
*/
// 07-06-21 Created a new program
#include<iostream>
using namespace std;
int binarySearch(int arr[], int item, int low, int high){
    while(low <= high){
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
 
int searchInfinite(int arr[], int item){
	if(arr[0] == item) return 0;
	int search = 1;
	while(arr[search] < item) search *= 2;
	if(arr[search] == item) return search;
	binarySearch(arr,item,search/2 + 1, search-1);
}

int main() {
    int arr[] = {2,43,65,120,170,190,220,320,370,570,679,751};
    int arr_size = sizeof(arr) / sizeof(int);
    cout << "The infinite size array is: " << endl;
    for(int i = 0; i < arr_size; i++){
	cout << arr[i] << " ";
    }
    cout << "......." << endl;
    cout << "Enter the item which you want to search: " << endl;
    int item;
    cin >> item;
    cout << "Index of Element: " << searchInfinite(arr,item) + 1 << endl;
    return 0;
}
