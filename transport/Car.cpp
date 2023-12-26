#include "Car.h"

Car::Car(const string b, const string m, const string ft, int y, bool e) : Transport(b, m, ft, y)
{
	electric = e;
}

void Car::print() const
{ 
	Transport::print();
	cout << "Electric Car: " << (electric ? "Yes" : "No") << endl;
}

void Car::input()
{
	Transport::input();
	cout << "Enter your car is electric? (0 or 1): ";
	cin >> electric;
}