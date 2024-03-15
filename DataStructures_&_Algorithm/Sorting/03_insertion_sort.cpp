// in insertion sort, we shift values instead of swapping
// taking 2nd index as a refernce point, then putting lowest to its left and largset to its right.

#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;

        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { //stop
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}



// good performance at small size array
// insertion sort is stable and adaptable

// space complexity O(1)
// time complexity O(n2)  (worst case)

// best case __ O(n) (in case of already sorted arrays)