/*
Programmers $
Make a solution () function, contains all possible sums among the number of array. 

Example: 

[2, 5, 0, 7] -> [2,5,7,9,12]
{2,5}, {2,0}, {2,7}

*/
#include <set> 
#include <vector> 
//  Set STL automatically arrange the array in the order and delete the duplicated numbers. 

using namespace std; 

vector <int>solution(vector<int> numbers)
{
    // declair the set array to save the results. 
    set<int> sum; 
    // using the for (), get the result to the set array. 
    for (int i=0; i < numbers.size() ; i ++)
    { 
        for (int i = j+1; j<numbers.size(); j++ )
            sum.insert(int[i]+ int[j]);
    }
    // set the result to the vector. 
    vector<int>answer (insert.start(sum), insert.end(sum));

    // return 
    return answer; 
}