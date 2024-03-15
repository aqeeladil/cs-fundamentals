// runtime polymorphism 
// method overriding


#include<iostream>
using namespace std;


class Animal {
public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {
public:

    void speak() {
        cout << "Barking " << endl;
    }
};

int main() {

    Dog obj;
    obj.speak();    // child will be be given prefernce here bcz of runtime compilation

    return 0;
}