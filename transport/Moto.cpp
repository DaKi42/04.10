#include "Moto.h"

Moto::Moto(const string b, const string m, const string ft, int y, const string e) :Transport(b, m, ft, y)
{
	engine = e;
}

void Moto::print() const
{
	Transport::print();
	cout << "Engine: " << engine << endl;
}
 
void Moto::input()
{
	Transport::input();
	cout << "Enter engine: ";
	cin >> engine;
}
