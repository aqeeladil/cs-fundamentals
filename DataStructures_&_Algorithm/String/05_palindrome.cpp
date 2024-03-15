// if the reverse of a string is equal to its original string, it is a palindrome

#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        //if Uppercase
        char temp = ch - 'A' + 'a';          //let ch='B', now temp = ('B' - 'A') + 'a' -> 1 + 'a' -> 'b', so we get 'b' as answer
        return temp;
    }
}

bool checkPalindrome(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(toLowerCase( name[s] ) != toLowerCase( name[e] )){
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;

    int len = getLength(name);

    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;


}