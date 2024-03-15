// shallow copy & deep Constructor
// copy assignment operator

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;
    char *name;

    Hero(){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Default Constructor called" << endl;
        name = new char[100];
    }

    void print(){
        cout << "[ Name: " << this->name<< " ,"; 
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    } 

};

int main(){

    Hero hero1;
    char name[7] = "babbar";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor

    Hero hero2(hero1);
    hero2.print();

    // hero1.print();


    // Hero hero2 = hero1;

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();

    // hero2.print();

   
}