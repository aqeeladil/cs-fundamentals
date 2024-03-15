
// fibbonaci series _ 0,1,1,2,3,5,8,13,........

#include <iostream>
using namespace std;


int fib(int n){
        //base case
        if (n==1){
            return 0;
        }
        if (n==2){
            return 1;
        }
        
        int ans = fib(n-1) + fib(n-2);

        return ans;
    }

int main(void){

    int n;
    cin >> n;
    cout << "nth fibbonacci number is " << fib(n) << endl;
    return 0;

}