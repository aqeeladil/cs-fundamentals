
// Count Ways To Reach The N-th Stairs
/* 
You have been given a number of stairs. Initially, you are at the 0th stair, 
and you need to reach the Nth stair. Each time, you can climb either one step or two steps.
You are supposed to return the number of distinct ways you can climb from the 0th step 
to the Nth step.
*/

#include <iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs)
{
    //base case
    if(nStairs < 0)
        return 0;
    
    if(nStairs == 0)
        return 1;
    
    //recursive relation
    int ans = countDistinctWayToClimbStair(nStairs-1) 
        + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}