#include "Country.hpp"

Country* Country::begin = NULL;

Country::Country() : _name("None"), _capital("None")
{
	next = NULL;
	Add();
}

void Country::Add() {
	Country* temp = this;
	temp->next = begin;
	begin = temp;
}

void Country::Show() {
	cout << _name << endl
		<< _capital << endl;
}

void Country::print() {
	Country* temp = begin;
	while (temp != NULL)
	{
		temp->Show();
		temp = temp->next;
	}
}

Country::~Country(){}