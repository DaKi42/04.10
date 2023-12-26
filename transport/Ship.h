 #pragma once
#include "Transport.h"
class Ship : public Transport
{
	bool weapon;
public:
	Ship() = default;
	Ship(const string b, const string m, const string ft, int y, bool w);
	void print() const;
	void input();
};

 