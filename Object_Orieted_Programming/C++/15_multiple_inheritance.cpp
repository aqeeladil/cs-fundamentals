#include<iostream>
using namespace std;

// one child class with multiple parent classes

class Animal {
public:
    int age;
    int weight;

    void bark() {
        cout << "Barking " << endl;
    }
};

class Human {
public:
    string color;

    void speak() {
        cout << "Speaking " << endl;
    }
};



//Multiple Inheritance
class Ninja: public Animal, public Human {

};


int main() {

    Ninja obj1;
    obj1.speak();
    obj1.bark();


    return 0;
}