// Access modifiers: (public, private, protected)
// by default : private

#include <iostream>
using namespace std;

class Hero
{
private:
    //int health;

public:
    int health;
    char level;

    void print(){
        cout << health << endl;
    }   
};

int main()
{

    Hero aqeel;

    aqeel.health = 80;
    aqeel.level = 'A';

    cout << "Health is " << aqeel.health << endl;
    cout << "Level is " << aqeel.level << endl;
}