#pragma once
#include <iostream>
#include <string>
using namespace std;
class Transport
{
protected:
	string brand;
	string model;
	string fuelType;
	int year;
public:
	Transport() = default;
	Transport(const string b, const string m, const string ft, int y);

	virtual void print() const;
	virtual void input();
	 
	string getBrand() const;
	void setBrand(const string b);

	string getModel() const;
	void setModel(const string m);

	string getFuelType() const;
	void setFuelType(const string ft);

	int getYear() const;
	void setYear(int y);
};