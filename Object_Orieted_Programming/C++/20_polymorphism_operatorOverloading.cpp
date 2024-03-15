// operator overloading

#include<iostream>
using namespace std;


class B {
public:
    int a;
    int b;

    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 

        cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};


int main() {

    // + operator 
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    // () operator
    obj1();

    return 0;
}
