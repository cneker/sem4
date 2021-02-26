#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream fi;
	ofstream fo;
	// You can add more key words if you want
	string iD[7] = { "and", "if", "for", "bool", "else", "int", "class" };
	string buff;
	// false - identifier, true - not identifier
	bool gg = false;
	// Storing identifiers
	vector<string> lst;

	fi.open("file.txt");

	if (fi.is_open()) {

		while (fi >> buff) {

			gg = false;
			// Is the first character of a word a digit
			if (!isdigit(buff[0])) {
				// Is this word an identifier
				for (int i = 0; i < 7; i++) {
					if (buff == iD[i]) {
						gg = true;
						break;
					}
				}
				// Does this word consist of characters of the Latin alphabet, '_' and numbers
				if (!gg) {
					for (int i = 0; i < buff.size(); i++) {
						if ((buff[i] >= 65 && buff[i] <= 90) ||
							(buff[i] >= 97 && buff[i] <= 122) ||
							buff[i] == '_') {
							continue;
						}
						else if (i != 0 && isdigit(buff[i])) {
							continue;
						}
						else {
							gg = true;
							break;
						}
					}
				}
			}
			else {
				gg = true;
			}

			if (!gg) {
				lst.push_back(buff);
			}
		}
	}
	fi.close();

	fo.open("file.txt");

	for (int i = 0; i < lst.size(); i++) {
		fo << lst[i] << " ";
	}

	fo.close();

	return 0;
}