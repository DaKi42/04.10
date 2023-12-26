#include "Ship.h"

Ship::Ship(const string b, const string m, const string ft, int y, bool w) :Transport(b, m, ft, y)
{
	weapon = w;
}

void Ship::print() const
{
	Transport::print();
	cout << "Weapon: " << (weapon ? "Have" : "Not Have") << endl;
}

void Ship::input()
{
	Transport::input(); 
	cout << "Enter weapon (0 or 1): ";
	cin >> weapon;
}