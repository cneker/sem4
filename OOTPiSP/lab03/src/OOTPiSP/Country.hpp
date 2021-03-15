#pragma once
#include <iostream>

using namespace std;

class Country {
protected:
	string _name;
	string _capital;
	Country* next;
public:
	Country();
	static Country* begin;
	void Add();
	void Show();
	static void print();
	virtual ~Country();
};