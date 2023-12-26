 #pragma once
#include "Transport.h"
class Plane : public Transport
{
	bool personal;
public:
	Plane() = default;
	Plane(const string b, const string m, const string ft, int y, bool p);
	void print() const;
	void input();
};
 