// in c++, one dimensional character array is called string
// https://cplusplus.com/reference/string/string/
// https://stackoverflow.com/questions/40716515/do-stdstrings-end-in-0-when-initialized-with-a-string-literal

#include<iostream>
using namespace std;

int main(){

    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;

    // NULL CHARACTER '\0' , its ASCII value is 0, it is used as a terminator
    // name[2] = '\0';    //it means, put null value at index 2 in 'name' string

    cout << "Your name is ";
    cout << name << endl;
}