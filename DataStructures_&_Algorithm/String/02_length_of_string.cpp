#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;

    // there is no need to give size variable in character arrays
    cout << "the length of name is " << getLength(name);
}