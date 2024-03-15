// static keyword ___ it belongs to class.... you dont need to create an object to access it.

#include <iostream>
using namespace std;

class Hero
{

public:
    int health;
    char level;
    static int timeToComplete;

    //static function
    static int random() {
        return timeToComplete ;
    }  
};

int Hero::timeToComplete = 5;

int main(){

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;


    // Hero a;
    // cout << a.timeToComplete << endl;


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;



    

    return 0;
   
}