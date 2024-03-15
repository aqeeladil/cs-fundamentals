

#include<iostream>
using namespace std;


int main(){

    //declare
    int number[6];

    //accessing an array
    cout << "Value at 0 index : " << number[0] << endl;
    // cout << "Value at 20 index is : " << number[20] << endl;


    //initialising an array 
    int second[3] = {5, 7, 11};
    // //accesing an element
    cout << "Value at 2 index is " << second[2] << endl;


    int third[15] = {2, 7};     //all the emty indexes will be filled with 0's.
    int n1 = 8;
    //print the array
    for (int i=0; i<n1; i++){
        cout << third[i] << " ";
    }

    //initialising all locations with 0
    int fourth[10] = {0};

    //initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};

}