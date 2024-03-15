#include<iostream>
using namespace std;


int getMax(int num[], int n){

    int max_val = INT8_MIN;

    for (int i=0; i<n; i++){
        if (num[i] > max_val){
            max_val = num[i];
        }
    }
    return max_val;
}


int getMin(int num[], int n){

    int min_val = INT8_MAX;

    for (int i=0; i<n; i++){
        if (num[i] < min_val){
            min_val = num[i];
        }
    }
    return min_val;
}


int main(){
    int size;
    cout << "Enter size " << endl;
    cin >> size;

    int num[100];

    //taking input in array
    for (int i=0; i<size; i++){
        cout << "Enter the number" << endl;
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;
}



