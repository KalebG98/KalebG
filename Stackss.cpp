#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<char> Myword;
	char l;
	cout << "Enter a word to be spelled backwards: " << endl;

	while (cin.get(l) && l != '\n')
		Myword.push(l);

	while (!Myword.empty()) {
		cout << Myword.top();
		Myword.pop();
	}
	cout << '\n';
	getchar();
	getchar();

}