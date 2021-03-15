#pragma once
#include "Country.hpp"

class Republic : public Country {
protected:
	double _area;
public:
	Republic();
	Republic(string name, string capital, double area);
	void Show();
	~Republic();
};