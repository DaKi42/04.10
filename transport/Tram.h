#pragma once
#include "Transport.h"
class Tram : public Transport
{
	string cons;
public:
	Tram() = default;
	Tram(const string b, const string m, const string ft, int y, const string ec);
	void print() const;
	void input();
};
 