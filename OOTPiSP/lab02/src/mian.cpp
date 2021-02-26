#include <iostream>
#include <fstream>

using namespace std;



int main()
{
	ifstream fi;
	ofstream fo;
	bool gg = false;
	char iD[7][40] = { "and", "if", "for", "bool", "else", "int", "class" };
	fi.open("file.txt");
	fo.open("filik.txt");
	if (fi.is_open()) {
		
		char buff[40];
		
		while (fi >> buff) {
			gg = false;
			if (!isdigit(buff[0])) {
				for (int i = 0; i < 7; i++) {
					if (strcmp(buff, iD[i]) == 0) {
						gg = true;
						break;
					}
				}

				if (!gg) {
					for (int i = 0; i < strlen(buff); i++) {
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
				fo << buff << " ";
			}
		}
	}
	fi.close();
	fo.close();


	return 0;
}