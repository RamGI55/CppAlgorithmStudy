/* 
Binary serach 
/*
Binary search is the search algorithm used to find the position of the target value within a sorted array.
To apply the binary search algorithm 
- data structure must be sorted.
- Access to any element of the data structure should take constant time.

Step-by-step of the binary search 
- Divine the search space into the two halves by searching index of mid.
- if the key is in the middle element, return middle 
- otherwise, chose the either half will be used as the next serach space.  
    - if the kye is smaller than the middle element - used the left side of the keys.
    - otherwise used the right side of the keys. 

Reference - geeksforgeeks.org 
https://www.geeksforgeeks.org/binary-search/
*/
#include<iostream>

using namespace std; 

// binaray serach function
int BinarySearch(int arr[], int low, int high, int x)
{ 
    // search until the low index hits to the highest index. 
    while (low <= high)
    { 
        int mid = low + (high-low) /2 ; 
        // if the element is in the middle index, returns the mid.       
        if (arr[mid] == x )
            return mid; 
        // if not, search the upper index from the middle. 
        if (arr[mid] < x )
            low = mid + 1; 
            // move the lower index in this case. 
        //otherwise, then search the lower index from the middle. 
        else 
            high = mid -1; 
            // moving the highest index, if the target element in the lower index than middle. 
    }
    return -1; 
    // if target element is not in the array, returns -1. 
}

// driver code 
int main ()
{ 
    int arr[] = { 2,3,4,5,10,23,33};
    int x = 10;
    int n = sizeof(arr)/ sizeof(arr[0]); 
    int result = BinarySearch(arr, 0, n-1, x); 
    if(result == -1) 
        cout << "Element isn't present in the array"; 
    else 
        cout << "Element is in the array" << " "<< result; 

    return 0; 

}
