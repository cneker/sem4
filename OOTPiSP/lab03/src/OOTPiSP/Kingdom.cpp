#include "Kingdom.hpp"

Kingdom::Kingdom() : _king("None")
{}

Kingdom::Kingdom(string name, string capital, int population, string king) : Monarchy(name, capital, population), _king(king)
{}

void Kingdom::Show() {
	Monarchy::Show();
	cout << _king << endl;
}

Kingdom::~Kingdom()
{}