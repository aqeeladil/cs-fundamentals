//Recursion
//Why? When the solution to a bigger problem lies in the similar small problem.
// f(n) = 2 * f(n-1)


#include<iostream> 
using namespace std;

int factorial(int n) {
    
    //base case
    if(n==0)
        return 1;

    return (n * factorial(n-1));     // 5* (4* (3* (2* (1* (1 )))))
} 

int main() {

    int n;
    cout << " Enter the value " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}