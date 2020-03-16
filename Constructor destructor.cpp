#include <iostream>
#include <cstdlib>

using namespace std;

class Object
{
public:
	Object()
	{
		cout << "Object Created" << endl;
	}
	~Object()
	{
		cout << "Object Destroyed" << endl;
	}
};
int main()
{
	cout << "\n\nCreate the Object " << endl;
	Object o1;

	cout << "\n\nCreate object Dynamically " << endl;
	Object* ptr = (Object*)malloc(sizeof(Object));
	free(ptr);

	cout << "\n\nObbject created using Smart Pointer" << endl;
	Object *o2 = new Object();
	delete o2;
	cout << endl;
	getchar();
	return 0;
}