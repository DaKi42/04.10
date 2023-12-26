#include "Plane.h"

Plane::Plane(const string b, const string m, const string ft, int y, bool p) :Transport(b, m, ft, y)
{
	personal = p;
}

void Plane::print() const
{
	Transport::print();
	cout << "Personal: " << (personal ? "Yes" : "No") << endl;
}

void Plane::input()
{
	Transport::input(); 
	cout << "Enter personal or not (0 or 1): ";
	cin >> personal;
}