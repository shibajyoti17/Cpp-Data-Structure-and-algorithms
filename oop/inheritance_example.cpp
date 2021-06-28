#include<iostream>
using namespace std;
class Mother {
public:
    void sayName() {
        cout << "I am a Roberts!!" << endl;
    }
};
class Daughter: public Mother {

};
int main() {
    Daughter d1;
    d1.sayName();
    return 0;
}
