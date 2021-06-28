#include<iostream>
using namespace std;
class Players{
	public:
	   static int count;
	   Players(){count++;}
	   ~Players(){count--;}
};
int Players::count = 0; // static member variables must be decalred outside the class in C++
int main(){
	Players p1;
	cout << "Player Count: " << Players::count << endl; // static variables must be called using :: outside the class
	{
	    Players p2;
	    cout << "Player Count: " << Players::count << endl; // inside scope and player count is increased by one
	}
	cout << "Player Count; " << Players::count << endl; // the Players p2 object is destroyed and player count is decreased by one
}
