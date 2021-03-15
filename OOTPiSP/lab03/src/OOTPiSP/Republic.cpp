#include "Republic.hpp"

Republic::Republic() : _area(0.0)
{}

Republic::Republic(string name, string capital, double area) : _area(area)
{
	_name = name;
	_capital = capital;
}

void Republic::Show() {
	Country::Show();
	cout << _area << endl;
}

Republic::~Republic()
{}