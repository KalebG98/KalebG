#include <iostream> 
#include <fstream> 
#include<cstdlib>
using namespace std;

class Asteroid
{
private:
	int size, speed;

public:
	Asteroid(int SI, int SP)
	{
		speed = SP;
		size = SI;
	}
		void setspeed(int SP)
		{
		speed = SP;
		}
			void setsize(int SI)
			{
			size = SI;
			}
				int getsize()
				{
				return size;
				}
					int getspeed()
					{
					return speed;
					}
	void displayStats()
	{
		cout << "Asteroid is size: " << size << " has speed of: " << speed << endl;
	}
};

int main() {
	Asteroid* ob1 = new Asteroid(1, 20);
	Asteroid* ob2 = new Asteroid(4, 3);
	ob1-> displayStats();
	ob2-> displayStats();
	getchar();
	return 0;
}