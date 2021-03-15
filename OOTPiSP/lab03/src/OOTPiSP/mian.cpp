#include <iostream>
#include "Country.hpp"
#include "Monarchy.hpp"
#include "Kingdom.hpp"
#include "Republic.hpp"

int main()
{
	system("color F0");
	Republic r11("Belarus", "Minsk", 12312.12);
	//r11.Add();
	Republic r12("Russia", "Moskow", 356556.34534);
	//r12.Add();
	r11.Show();
	r12.Show();

	cout << endl;

	Monarchy* m1 = new Monarchy("France", "Paris", 123456);
	//m1->Add();
	m1->Show();

	cout << endl;

	Kingdom k1("Belgium", "Brussels", 23244224, "Philip");
	k1.Show();

	cout << endl;

	Country::print();
	delete m1;
	return 0;
}