#include <iostream>
#include <time.h>

using namespace std;

int main() {

	string one = "First string";
	string second = "Second string";
	string third = "Third string";
	string forth = "Forthh string";

	clock_t start = clock();

	for (int i = 0; i < 100; i++)
	{
		cout << one << " " << third << endl;
		swap(one, third);
		cout << one << " " << third << endl;

		cout << second << " " << forth << endl;
		swap(second, forth);
		cout << second << " " << forth << endl;
	}

	clock_t finish = clock();
	cout << endl << "Time: " << finish - start;

	return 0;
}