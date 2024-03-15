// Check If The String Is A Palindrome
// if the reverse of a string is equal to its original string, it is a palindrome

// leetcode-125
// valid palindrome
/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase 
letters and removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
*/ 



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    char toLowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string a)
    {
        int s = 0;
        int e = a.length() - 1;

        while (s <= e)
        {
            if (a[s] != a[e])
            {
                return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s){

        // remove extra character
        string temp = "";

        for (int j = 0; j < s.length(); j++){
            if (valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        // convert to lowercase
        for (int j = 0; j < temp.length(); j++){
            temp[j] = toLowerCase(temp[j]);
        }
        // check palindrome
        return checkPalindrome(temp);
    }
};