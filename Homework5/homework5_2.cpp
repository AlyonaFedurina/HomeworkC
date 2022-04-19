#include <iostream>
#include <cstdlib>

using namespace std;

class Hero
{
public:
	string name;
	int health;
	int strength;

	Hero(string name, int strength)
	{
		this->name = name;
		this->strength = strength;
		this->health = 1000;
	};

	void strike(Hero& otherHero)
	{
		srand(this->strength + this->health);
		int random = static_cast<int>(rand());
		int delta = random % 100;
		otherHero.health = otherHero.health - delta;
	}
};

int main()
{
	Hero Godzilla("Godzilla", 500);
	Hero Kong("Kong", 500);

	while ((Godzilla.health > 0) && (Kong.health > 0))
	{
		if (Godzilla.health > 0) Godzilla.strike(Kong);
		if (Kong.health > 0) Kong.strike(Godzilla);

		if (Godzilla.health > 0)cout << Godzilla.name << ": " << Godzilla.health << endl;
		else
		{
			cout << Godzilla.name << " lost" << endl;
			break;
		}
		if (Kong.health > 0)cout << Kong.name << ": " << Kong.health << endl;
		else
		{
			cout << Kong.name << " lost" << endl;
			break;
		}
	}
}
