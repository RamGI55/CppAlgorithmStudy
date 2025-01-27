#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std; 

struct point {
    int x, y; 

    point (int x, int y) : x (x), y (y) {}

}; 

bool compare (const point &a, const point &b)
{ 
    if (a.x == b.x )
    {
        return a.y < b.y;

    }
    return a.x < b.x;
}

int main ()
{
    vector<int> v = {1,3,4,5,6,5,2};

    int ret = count(v.begin(), v.end(), 5);// count () needs algorithm, 
    // counts how many 5 is in the vector

    sort (v.begin(), v.end()); // 1,2,3,4,5,6
    sort (v.rbegin(),v.rend()); // 6,5,4,3,2,1

  
// using third parameter of the sort();

    vector <point> points = {{3, 4}, {4,6}, {5,9}, {5,1},{1,4}}; 
    sort(points.begin(), points.end(), compare); // compare > change the compare value is false.

    for (const point &p: points){
        cout << "("<< p.x << ", " << p.y<< ")"; 
    }
    cout <<endl; 


    // next permutation() - generate all possible arrays in the condition. 
    // gets starting point and end point of the next_permutation() 
    // call the fuction inside of the while() function. 

    vector<int> v2 = { 1,2,3,4};  // data must pre-sorted as the order. 
    do{
         for (int i : v2)
         { 
            cout << i << " ";  
         }
         cout << endl; 
    }
    while (next_permutation(v2.begin(), v2.end()));

    // gets 
    /*
    1 2 3 4
    1 2 4 3
    1 3 2 4
    1 3 4 2
    1 4 2 3
    1 4 3 2
    2 1 3 4
    2 1 4 3
    2 3 1 4
    2 3 4 1
    2 4 1 3
    2 4 3 1
    3 1 2 4
    3 1 4 2
    3 2 1 4
    3 2 4 1
    3 4 1 2
    3 4 2 1
    4 1 2 3
    4 1 3 2
    4 2 1 3
    4 2 3 1
    4 3 1 2
    4 3 2 1
    */
/*
Unique () - delete the duplicated instances. 
*/
vector<int> v3 ={ 1,2,2,2,3,3,3,4,5,5,6};
auto newEnd = unique(v3.begin(), v3.end());
for (auto it = v3.begin (); it != newEnd; ++it )
{
    cout << *it << " "; 
}
cout << endl ; // returns 1 2 3 4 5 6

cout << v3.size() << endl; // returns 11 

for (auto it = v3.begin(); it !=v3.end(); ++it)
{
    cout <<*it <<" "; 
}
cout <<endl; // returns 1 2 3 4 5 6 3 4 5 5 6
// unique() pushes back the duplicated instances 
   

/*
binary search - excute the binary search in the sorted container 
if the container did not sorted, do the sorting prior to the searching
returns true if finding the elements or returning false. 

processing time - O(logN)
*/

vector<int> v4 = { 1,2,3,4,5}; 

cout << binary_search(v4.begin(), v4.end(), 3) << endl; // returns true
cout << binary_search(v4.begin(), v4.end(), 7) << endl; // returns false

return 0;

}
