#pragma once
#include "Monarchy.hpp"

class Kingdom : public Monarchy {
protected:
	string _king;
public:
	Kingdom();
	Kingdom(string name, string capital, int population, string king);
	void Show();
	~Kingdom();
};