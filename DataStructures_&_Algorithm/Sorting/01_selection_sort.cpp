//Selection Sort
//putting the lowest to the left
//taking first index as reference point, then checking the lowest value in the remaining part, and swapping it with the refernce point if found.

#include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int n){

    for (int i=0; i<n-1; i++){
        //for round 1 to n-1
        int minIndex = i;

        for (int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    
}


// space complexity is constant O(1)
// time complexity is quadratic O(n2)  (worst case)

// best case time complexity __O(n2) (if the array is alraedy sorted)

// USE CASE
// it works well for small size array, or where the input is small