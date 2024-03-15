//polymorphism means __ many forms
// method overloading

#include<iostream>
using namespace std;

class A {

public:

    void sayHello() {
        cout << "Hello Love Babbar" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello  " << name << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

int main(){
    
    A obj;
    obj.sayHello();

    

}