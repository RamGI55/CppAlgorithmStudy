#include <algorithm>
#include <vector> 

using namespace std; 
/* 
vector vec.size max 10000 
vector 1<vec<5
return upstream if the multiple people gets the highest points 

1st tester - 1,2,3,4,5,// 1, 2,3,4,5, << increment 1 to 5, until hits the 5, then back to 1 
2nd tester - 2,1,2,3,2,4,5,// << check 2 every increment, but skips 2
3rd tester - 3,3,1,1,2,2,4,4,5,5,// 3,3, 3>1>2>4>5>

using the moduler calcuations - % 
*/
vector<int> firstPattern = { 1,2,3,4,5}; // using %5, 4,3,2,1,0,
vector<int> SecondPattern = {2,1,2,3,2,4,2,5}; // using %5 3,4,3,2,1,0
vector<int> ThirdPattern = {3,3,1,1,2,2,4,4,5,5}; 

vector<int> solution(vector<int>answers)
{
    vector<int> answer; 
    vector<int> matchCnt(3); 
     for (int i = 0; i< answers.size(); ++i)
    {
        if (answers[i] == firstPattern[i%firstPattern.size()])
        matchCnt[0]++; 

        if (answers [i] == SecondPattern[i%SecondPattern.size()])
        matchCnt[1]++;

        if (answers[i] == ThirdPattern[i%ThirdPattern.size()])
        matchCnt[2]++;
    }

    int max_score = *max_element(matchCnt.begin(), matchCnt.end());

    for (int i = 0; i < 3 ; i++)
    {
        if(matchCnt[i] == max_score)
        {
            answer.push_back(i+1); 
        }
    }
    return answer; 
}
