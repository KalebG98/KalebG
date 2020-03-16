#include <iostream>
#include <vector>
#include <string>

using namespace std;


int getMenuChoice() 
{
	cout << "1. Inventory" << endl;
	cout << "2. Add Inventory" << endl;
	cout << "3. Remove Inventory" << endl;
	cout << "4. Exit Inventory" << endl;
	int choice;
	while (true) 
	{
		cout << "Enter choice: ";
		cin >> choice;
		if (choice < 1 || choice > 4) 
		{
			cout << "Invalid!" << endl;
		}
		else 
		{
			return choice;
		}
	}
}

int main() 
{
	vector<string> v;
	string str;
	int choice;
	while (true) 
	{
		choice = getMenuChoice();
		if (choice == 1) 
		{
			for (int i = 0; i < v.size(); ++i) 
			{
				cout << v[i] << " ";
			}
			cout << endl;
		}
		else if (choice == 2) 
		{
			cout << "Input item to add to inventory ";
			cin >> str;
			v.push_back(str);
		}
		else if (choice == 3) 
		{
			cout << "Input item to drop from inventory ";
			cin >> str;
			vector<string>::iterator itr = find(v.begin(), v.end(), str);
			v.erase(itr);
		}
		else {
			break;
		}
		cout << endl << endl;
		getchar();
	}
	return 0;
}