#include "Monarchy.hpp"

Monarchy::Monarchy() : _population(0)
{}

Monarchy::Monarchy(string name, string capital, int population) : _population(population)
{
	_name = name;
	_capital = capital;
}

void Monarchy::Show() {
	Country::Show();
	cout << _population << endl;
}

Monarchy::~Monarchy()
{}