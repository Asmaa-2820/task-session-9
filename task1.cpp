#include <iostream>
#include <vector>
#include<string>
using namespace std;

class character
{
private:
	string name;
	int health;
	int level;

public:
	character(string n, int h, int l)
	{
		name = n;
		health = h;
		level = l;
	
	}
	
	void takeDamage(int amount)
	{
		amount = - health;
		if (health < 0)
		{
			health = 0;
		}
	}

	void levelUp()
	{
		level++;
	}

	void getStatus()
	{
		cout << "Name: " << name << endl;
		cout << "Health: " << health << endl;
		cout << "Level: " << level << endl;
	}

};

int main()
{
	character person("Asmaa", 100, 10);
	person.takeDamage(20);
	person.levelUp();
	person.getStatus();
	return 0;
}
