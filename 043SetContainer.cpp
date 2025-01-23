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
			cout << " ���� " << endl;
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
			cout << " ���� " << endl;
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
			cout << " ���� " << endl;
	}


		return 0;
}