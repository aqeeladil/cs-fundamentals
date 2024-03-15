#include<iostream>
using namespace std;

int search(int arr[], int size, int value){
    for(int i=0; i<size; i++){
        if(arr[i] == value){
            return 1;
        }
    }
    return 0;
}

int main(){

    int my_array[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    int key;
    cout << "Enter the value to search for : ";
    cin >> key;

    bool found = search(my_array, 10, key);

    if(found){
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is absent" << endl;
    }

    return 0;




}