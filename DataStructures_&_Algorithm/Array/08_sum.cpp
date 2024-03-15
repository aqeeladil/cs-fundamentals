// sum of elemenst in an array

#include<iostream>
using namespace std;

void sumArray(int arr[], int n){

    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << sum << endl;
}


int main(){

    int my_array[5] = {1,2,3,4,5};
    sumArray(my_array, 5);
    
}