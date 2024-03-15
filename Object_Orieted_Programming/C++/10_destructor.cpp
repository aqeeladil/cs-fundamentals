// destructor   __ used to deallocate the memory

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

    //copy constructor
    Hero(Hero& temp) {

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }

};

int main(){

    //for static, destructor function runs automatically
    Hero a;

    //dynamic
    Hero *b = new Hero();
    delete b;    // running destructor manually

    return 0;


    
   
}