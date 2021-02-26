//version two

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream fi;
	ofstream fo;
	// ��� ������� ����� �������� ��� ������ ���������������
	string iD[7] = { "and", "if", "for", "bool", "else", "int", "class" };
	string buff;
	// false - ���������, true - ����������
	bool gg = false;
	// �������� ����������
	vector<string> lst;

	fi.open("file.txt");

	if (fi.is_open()) {
		
		while (fi >> buff) {

			gg = false;
			// �������� �� ������ ������ ������
			if (!isdigit(buff[0])) {
				// �������� �� ����� ���������������
				for (int i = 0; i < 7; i++) {
					if (buff == iD[i]) {
						gg = true;
						break;
					}
				}
				// ������� �� ����� ������ �� ��������� ���� �������� (�������) ��������,
				// ������� ������������� � ����
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