// using functions with arrays


#include<iostream>
using namespace std;


void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " " << endl;
}

int main(){

    int third[15] = {2, 7};
    
    int fourth[10] = {0};
    
    int fifth[10] = {1};
    

    printArray(third, 9);
    printArray(fourth, 10);
    printArray(fifth, 10);


}
