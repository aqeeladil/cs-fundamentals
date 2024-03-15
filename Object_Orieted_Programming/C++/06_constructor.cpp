// Constructor

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

    
};

int main(){

    //static allocation
    Hero huchi;
    

    //dynamic allocation
    Hero *b = new Hero();


   
}