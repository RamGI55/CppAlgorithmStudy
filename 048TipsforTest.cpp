/*
Early Return 
- return before the function fully excuted, gives the better readilblity the code.

Guard Clauses 
- give the exceptional code before to run the logic, can protect from execptional cases and exit early if the condition is not viable for function.  
*/
#include <iostream>
#include <vector> 

using namespace std; 

double total_price(int quantity, double price){
    double total = quantity * price; 
    if (total > 100){
        return total * 0.9; // return early if the total is more than 100, skip the process to run the all of the function.
    }
    return total; 
}

double avg_price(const vector<int>& arr, int N )
{ 
    if (arr.empty())
    {
        return -1; 
    }
    if (N == 0)
    {
        return -1; 
    }

    // set the gurad clause for the condition cannot run the average price function
    // in this case, if the array doesn't contain any value or N is 0, 
    // it cannot cacluate the average. 
    int sum = 0; 
    for (int num : arr){
        sum+= num;

    }
    return sum / N;
}

int main () 
{ 
    cout<< total_price(4, 50) << endl; // return 180
    
    vector <int> avg = { 1,2,3,4,5};
    cout << avg_price(avg, 5) << endl;  // returns 3; 
return 0; 
}