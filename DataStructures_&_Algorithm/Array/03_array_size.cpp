//NOTE  
    //each index block = 4 bits
    //1 integer = 4 bits
    //fifthSize = (4 * 10)/4

#include<iostream>
using namespace std;


int main(){
    
    int fifth[10] = {1};
    int fifthSize = sizeof(fifth)/sizeof(int); 
    
    cout<<" Length of Fifth is " << fifthSize <<endl;

/////////////////////////////////////////////////////////

//here it will give length size 13 instead of two, which is not a good practice

    int sixth[13] = {3,4};                   
    int sixthSize = sizeof(sixth)/sizeof(int); 
    cout<<" Length of sixth is " << sixthSize <<endl;

}