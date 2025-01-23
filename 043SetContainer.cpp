#include <iostream>
#include <set>

using namespace std; 
int main()
{
	set<int> setcontainer = { 1,2,3,5,6 };

	setcontainer.insert(4);

	int targets[] = { 4 }; 

	for (int target : targets)
	{
		auto it = setcontainer.find(target);

		if (it != setcontainer.end())
		{
			cout << target << " " << &it << endl; //00000019DC30F2B8

		}
		else
			cout << " 으헤 " << endl;
	}
	setcontainer.erase(2);
	for (int target : targets)
	{
		auto it = setcontainer.find(target);

		if (it != setcontainer.end())
		{
			cout << target << " " << &it << endl; // print different address than before. 00000019DC30F368

		}
		else
			cout << " 으헤 " << endl;
	}

	setcontainer.erase(4); // delete the 4. print the else.
	for (int target : targets)
	{
		auto it = setcontainer.find(target);

		if (it != setcontainer.end())
		{
			cout << target << " " << &it << endl; // print different address than before. 00000019DC30F368

		}
		else
			cout << " 으헤 " << endl;
	}


		return 0;
}