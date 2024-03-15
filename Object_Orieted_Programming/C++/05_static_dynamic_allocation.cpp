// static vs dynamic memory allocation

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main(){

    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('A');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setLevel('B');
    b->setHealth(70);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;

   
}