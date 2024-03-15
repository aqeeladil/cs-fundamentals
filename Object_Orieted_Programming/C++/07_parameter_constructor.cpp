// Parametized Constructor

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    Hero(){
        cout << "Constructor called" << endl;
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }
    
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    void print(){
        cout << health << endl;
        cout << level << endl;
    }

};

int main(){

    Hero temp(22, 'B');
    temp.print();

   
}