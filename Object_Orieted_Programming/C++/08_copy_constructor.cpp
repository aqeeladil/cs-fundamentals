// copy Constructor

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    Hero(){
        cout << "Default Constructor called" << endl;
    }

    //Parameterised Constructor
    Hero(int health) {
        this -> health = health;
    }
    
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    void print(){
        cout << this->health << endl;
        cout << this->level << endl;
    }

    //copy constructor
    Hero(Hero& temp) {

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

};

int main(){


    Hero suresh(70, 'B');
    suresh.print();

    Hero quresh(suresh);
    quresh.print();



    
   
}