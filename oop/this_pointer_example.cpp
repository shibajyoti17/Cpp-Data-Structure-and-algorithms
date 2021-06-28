#include<iostream>
using namespace std;
class Point{
	int x, y;
	public:
	   Point(int x,int y){
		this->x = x;
		this->y = y;
	   }
	   int getX(){
		return x;
	   }
	   int getY(){
		return y;
	   }
	   Point &setX(int x){
		this->x = x;
		return *this;
	   }
	   Point &setY(int y){
		this->y = y;
		return *this;
	   }
};
int main(){
	Point p1(5,5), p2(10,20);
	(p1.setX(24)).setY(21); // chaining of methods.
	(p2.setX(134)).setY(149); // chaining of methods.
	cout << "p1.x: " << p1.getX() << " p1.y: " << p1.getY() << endl;
	cout << "p2.x: " << p2.getX() << " p2.y: " << p2.getY() << endl;
}
