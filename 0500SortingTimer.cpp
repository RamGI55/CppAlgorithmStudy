#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <ctime> 

// using O(n^2) algorithm 

using namespace std; 
void bubbleSort(vector<int> &v){
    for (size_t i=0; i < v.size() -1; ++i)
        for (size_t j=0; j<v.size()-i-1; ++ j)
            if (v[j] > v[j +1])
                swap(v[j], v[j+1]);


}

int main(){ 
    vector<int> vec(30000); 
    for (int i = 0; i < 30000; ++i){
        vec[i] = i + 1; 
}

// calcuate the time of bubble sorting 
vector<int> vectorForBubbleSort = vec;
clock_t startBubbleSort = clock(); 
bubbleSort(vectorForBubbleSort); 
clock_t endBubbleSort = clock(); 
double timeBubbleSort = double(endBubbleSort - startBubbleSort) / CLOCKS_PER_SEC; 

// cacluate the time of O(N) sorting 
vector<int> vecForStdSorting = vec; 
clock_t startStdSort = clock(); 
sort(vecForStdSorting.begin(), vecForStdSorting.end());
clock_t endStdSort = clock(); 
double timeStdSort = double(endStdSort - startStdSort) / CLOCKS_PER_SEC; 

cout << " Time of the bubble sorting " << timeBubbleSort << endl; 
cout << " Time of the Std::sort" << timeStdSort << endl ;

return 0 ;


}

