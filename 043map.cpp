#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> studentScore;

	studentScore["Momoi"] = 55;
	studentScore["Midori"] = 89;
	studentScore["Arisu"] = 100; //intialising keys and values, must initalise the key for the each instance. 

	//using [] method - convinent apporach, risk to get unintended key generation. 
	int score1 = studentScore["Momoi"]; // score 
	cout << score1 << endl; // print momoi's score 

	int score2 = studentScore["Yuzu"];
	cout << score2 << endl; // make a new key as Yuzu, print score as none  << if making Yuzu was unintended, it might be in the trouble. 

	//using find () Method // bit complicated to excute, less risky to get unintended keys. 
	auto score3 = studentScore.find("Midori"); // make sure to use () instaed of [] 
	if (score3 != studentScore.end()) {

		int Midoriscore = score3->second;
		cout << Midoriscore << endl;
	}

	// Change the value of the map 
	studentScore["Momoi"] = 25; // change the momoi's score, she got lower score than I know. 
	int newMomoiScore = studentScore["Momoi"];
	cout << newMomoiScore << endl;

	// insert the map
	studentScore.insert(make_pair("Kayoko", 94));
	studentScore.insert(make_pair("Aru", 10));

	for (const auto& pair : studentScore)
	{
		cout << pair.first << ": " << pair.second << endl; 
	}
	// get Aru and Kayoko on the list, list is automatically sorted by the name. 

	//erase the map 
	studentScore.erase("Aru");
	for (const auto& pair : studentScore)
	{
		cout << pair.first << ": " << pair.second << endl;
	}
	// delete aru 
	
	auto it = studentScore.find("Kayoko"); 
	if (it != studentScore.end())
	{
		studentScore.erase(it); 
	}
	// delete Kayoko

	for (const auto& pair : studentScore)
	{	cout << pair.first << ": " << pair.second << endl;
	}



}