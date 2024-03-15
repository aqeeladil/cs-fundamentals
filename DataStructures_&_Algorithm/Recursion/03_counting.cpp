#include<iostream> 
using namespace std;

void print(int n) {
    //base case
    if(n == 0) {
        return ;
    }

    cout << n << endl;      //output: 5,4,3,2,1

    //Recursive relation
    print(n-1);

    // cout << n << endl;       //output: 1,2,3,4,5
}

int main() {

    int n;
    cout << " Enter the number " << endl;
    cin >> n;
    cout << endl;
    print(n);


    return 0;
}