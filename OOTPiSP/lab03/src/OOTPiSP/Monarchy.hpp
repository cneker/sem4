#pragma once
#include "Country.hpp"

class Monarchy : public Country {
protected:
	int _population;
public:
	Monarchy();
	Monarchy(string name, string capital, int population);
	void Show();
	~Monarchy();
};