/*2. Поменять четные символы с нечетными.*/
#include <iostream>

using namespace std;

int swap() {
	char str[] = "koza";
	int len = strlen(str);
	cout << str << endl;

	__asm
	{
		lea esi, str
		mov eax, len
		mov bl, 2
		div bl
		mov ecx, eax
		looope :
		inc esi
			mov al, [esi]
			xchg al, [esi - 1]
			mov[esi], al
			inc esi
			loop looope
	}

	cout << str << endl;
}

int main() {

	swap();

	return 0;
}