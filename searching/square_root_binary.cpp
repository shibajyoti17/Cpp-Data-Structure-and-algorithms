/* The program is used to find the square root(floor) of a number using
   binary search.
   
   Inputs: -> The number whose square root is to be determined.
   Output: -> Returns the floor square root of the number.
*/
// 07-06-21 Created a new program.
#include<iostream>
using namespace std;
int findFloorSquareroot(int n) {
    int low = 0, high = n, mid, square, result = -1;
    while(low <= high) {
        int mid = (low+high)/2;
	square = mid * mid;
        if(square == n) {
            return mid;
        }
        else if(square < n) {
            low = mid + 1;
	    result = mid;
        }
        else {
            high = mid - 1;
        }
    }
    return result;
}
int main() {
    int n;
    cout << "The number is: " << endl;
    cin >> n;
    cout << "The square root of the number is: "; 
    cout << findFloorSquareroot(n) << endl;
    return 0;
}
