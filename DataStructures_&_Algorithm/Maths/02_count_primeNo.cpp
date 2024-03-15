// leetcode - 204
// less optimized solution
// O(n2) time complexity

#include <vector>
using namespace std;

class Solution
{
private:
    bool isPrime(int n)
    {

        if (n <= 1)
            return false;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    int countPrimes(int n)
    {

        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
        return count;
    }
};
