#include<iostream>
using namespace std;
class Complex {
private:
    int real, img;
public:
    Complex(int real = 0, int img = 0) {
        this->real = real;
        this->img = img;
    }
    Complex operator + (Complex const &c) {
        Complex res;
        res.real = real + c.real;
        res.img = img + c.img;
        return res;
    }
    void print() {
        cout << real << " + " << img << "i" << endl;
    }
};
int main() {
    Complex c1(5,10), c2(40,200);
    Complex c3 = c1 + c2;
    c3.print();
}
