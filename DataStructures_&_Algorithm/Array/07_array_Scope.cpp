#include<iostream>
using namespace std;

void update(int arr[], int size) {

    cout << endl << "Inside the function" <<endl;
    
    //updating array's first element   
    //means it will change the original value in main file
    arr[0] = 120;

    //printing the array
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    } cout<<endl;

    cout << "Going back to main function" << endl;
}


int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout << endl << "Printing in main function" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}