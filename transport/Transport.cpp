#include "Transport.h"

Transport::Transport(const string b, const string m, const string ft, int y) : brand(b), model(m), fuelType(ft), year(y)
{
}

void Transport::print() const
{
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "Fuel Type: " << fuelType << endl;
	cout << "Year: " << year << endl;
}
 
void Transport::input()
{
	cout << "Enter brand: ";
	cin >> brand;

	cout << "Enter model: ";
	cin >> model;

	cout << "Enter fuel type: ";
	cin >> fuelType;

	cout << "Enter year: ";
	cin >> year;

}

string Transport::getBrand() const
{
	return brand;
}

void Transport::setBrand(const string b)
{
	brand = b;
}

string Transport::getModel() const
{
	return model;
}

void Transport::setModel(const string m)
{
	model = m;
}

string Transport::getFuelType() const
{
	return fuelType;
}

void Transport::setFuelType(const string ft)
{
	fuelType = ft;
}

int Transport::getYear() const
{
	return year;
}

void Transport::setYear(int y)
{
	year = y;
}