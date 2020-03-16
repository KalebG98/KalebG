#include <iostream>
#include <time.h>
using namespace std;
typedef struct 
{		//Human Structure
	char name[10];
	int hitpoints;
	int hitchance;
	int maxhit;
	int minhit;
} Human;
typedef struct 
{		//Monster Structure
	char name[10];
	int hitpoints;
	int hitchance;
	int maxhit;
	int minhit;
} Monster;

int main()
{
	srand((unsigned int)time(NULL));     //Start fight process
	Monster mon;
	Human hum;
	char choice;
	cout << "Welcome to Monsters vs. Humans!" << endl;
	int test = 0;
	while (test != 1)
	{
		cout << "Would you like to create a monster or a human?" << endl;
		cout << "Enter \"m\" for monster, \"h\" for human, or \"n\" for none" << endl;
		cin >> choice;
		switch (choice)
		{
		case 'm':    //Monster Creation
		{
			cout << "Enter Monster Name" << endl;
			cin >> mon.name;			//set name for monster
			cout << "Enter Hitpoints" << endl;
			cin >> mon.hitpoints;		//set hitpoints for monster
			cout << "Enter Max Hit" << endl;
			cin >> mon.maxhit;			//set maxhit for monster
			cout << "Enter Min Hit" << endl;
			cin >> mon.minhit;			//set minhit for monster
			break;
		}
		case 'h':	//Human Creation
		{
			cout << "Enter Human Name" << endl;
			cin >> hum.name;			//set name for human 
			cout << "Enter Hitpoints" << endl;
			cin >> hum.hitpoints;		//set hitpoints for human
			cout << "Enter Max Hit" << endl;
			cin >> hum.maxhit;			//set maxhit for human
			cout << "Enter Min Hit" << endl;
			cin >> hum.minhit;			//set minhit for human
			break;
		}
		case 'n':
		{
			test = 1;
		}
	}
	while (hum.hitpoints>0 && mon.hitpoints>0)
	{
		int turn = rand() % 10 + 1;
		if (turn <= 5)
		{
			hum.hitchance = rand() % 100 + 1;
			if (hum.hitchance <25)			//25% chance to hit 0 to 24 human
			{
				cout << hum.name << "had a weak hit on " << mon.name << endl;
				mon.hitpoints = (mon.hitpoints) - hum.minhit;
			}
			if (hum.hitchance >= 25 && hum.hitchance <50)		//25% chance to hit 25 to 49 human
			{
				cout << hum.name << " missed the attack" << endl;
			}
			if (hum.hitchance >= 50 && hum.hitchance< 75)	//25% chance to hit 50 to 74 human
			{
				int damage = rand() % (hum.maxhit - hum.minhit);
				cout << "Solid attack by " << hum.name << " on " << mon.name << endl;
				mon.hitpoints = mon.hitpoints - damage;
			}
			if (hum.hitchance >= 75 && hum.hitchance <= 100)	//25% chance to hit 75 to 99 human
			{
				cout << "Maximum damage by " << hum.name << "!What a hit!" << endl;
				mon.hitpoints = mon.hitpoints - hum.maxhit;
			}
		}
		if (turn > 5 && turn <= 10)
		{
			mon.hitchance = rand() % 100 + 1;
			if (mon.hitchance < 25)			//25% chance to hit 0 to 24 monster
			{
				cout << mon.name << "had a weak hit on " << hum.name << endl;
				hum.hitpoints = (hum.hitpoints) - mon.minhit;
			}
			if (mon.hitchance >= 25 && mon.hitchance < 50)		//25% chance to hit 25 to 49 monster 
			{
				cout << mon.name << " missed the attack" << endl;
			}
			if (mon.hitchance >= 50 && mon.hitchance < 75)		//25% chance to hit 50 to 74 monster
			{
				int damage = rand() % (mon.maxhit - mon.minhit);
				cout << "Solid attack by " << mon.name << " on " << hum.name << endl;
				hum.hitpoints = hum.hitpoints - damage;
			}
			if (mon.hitchance >= 75 && mon.hitchance <= 100)		//25% chance to hit 75 to 99 monster
			{
				cout << "Maximum damage by " << mon.name << "!What a hit!" << endl;
				hum.hitpoints = hum.hitpoints - mon.maxhit;
			}
		}
	}
	cout << "And that's all folks!" << endl;
	if (mon.hitpoints>0)		//End of fight process
	{
		cout << "The monster has defeated the human" << endl;
		cout << "Monster health: " << mon.hitpoints << endl;
		cout << "Human health: " << hum.hitpoints << endl;
	}
	if (hum.hitpoints>0)
	{
		cout << "The human has defeated the monster" << endl;
		cout << "Human health: " << hum.hitpoints << endl;
		cout << "Monster health: " << mon.hitpoints << endl;
	}
	getchar();
	getchar();
}