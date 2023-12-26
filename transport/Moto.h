#pragma once
#include "Transport.h"
class Moto : public Transport
{
	string engine;
public:
	Moto() = default;
	Moto(const string b, const string m, const string ft, int y, const string e);
	void print() const;
	void input();
}; 