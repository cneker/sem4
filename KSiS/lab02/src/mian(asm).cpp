#include <iostream>

using namespace std;

int swap(string one, string second) {

	int len = one.size();
	cout << one << " " << second << endl;

	__asm
	{
		lea esi, one
		lea edi, second
		mov ecx, len

		cikle:
			mov dl, [esi]
			mov al, [edi]
			mov [esi], al
			mov [edi], dl
			inc esi
			inc edi
			loop cikle
	}

	cout << one << " " << second << endl;
}

int main() {

	string one = "First string";
	string second = "Second string";
	string third = "Third string";
	string forth = "Forthh string";

	swap(one, third);
	swap(second, forth);

	return 0;
}