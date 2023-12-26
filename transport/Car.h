#pragma once
#include "Transport.h"
class Car : public Transport
{
	bool electric;
public:
	Car() = default;
	Car(string b, const string m, const string ft, int y, bool e);
	void print() const;
	void input();
}; 
