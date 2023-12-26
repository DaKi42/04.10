#include "Tram.h"

Tram::Tram(const string b, const string m, const string ft, int y, const string ec) :Transport(b, m, ft, y)
{
	cons = ec;
}

void Tram::print() const
{
	Transport::print();
	cout << "Electricity Consumption: " << cons << " kWh" << endl;
}

void Tram::input()
{ 
	Transport::input();
	cout << "Enter electricity consumption: ";
	cin >> cons;
}