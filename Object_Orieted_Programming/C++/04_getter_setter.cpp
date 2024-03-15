// Getters & Setters are used to get and update the values that cannot be accesed from outside of class


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

    Hero aqeel;

    aqeel.setHealth(89);
    cout << "Aqeel health is " << aqeel.getHealth() << endl;

    aqeel.setLevel('G');
    cout << "Aqeel health is " << aqeel.getLevel() << endl;


}