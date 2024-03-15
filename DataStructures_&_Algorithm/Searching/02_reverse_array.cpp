#include<iostream>
using namespace std;

void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int my_array[6] = {1,4,0,5,-2,15};

    reverse(my_array, 6);
    printArray(my_array, 6);

}