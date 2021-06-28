#include<iostream>
using namespace std;
class Players{
	private:
	   static int count ;
	public:
	   Players(){count++;}
	   static int getCount(){return count;} // static function declared so as to access the count variable
};
int Players::count = 0; // static variable declaration
int main(){
	Players p1, p2;
	cout << "Total Number of Players: " << Players::getCount() << endl; // syntax used for calling static functions inside a class
 	return 0;
}
