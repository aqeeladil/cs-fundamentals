//https://leetcode.com/problems/string-compression/

#include<string>
#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while(i<n)
        {
            int j = i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            // store oldChar
            chars[ansIndex++] = chars[i];
            int count = j-1;
            if(count>1){
                //converting the counting into single digit and saving in answer
                string cnt = to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }
            i=j;

        }
        return ansIndex;
        
    }
};