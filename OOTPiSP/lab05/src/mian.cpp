#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

class Complex {
	int real;
	int imag;
	friend ostream& operator<< (ostream& outstream, const Complex& cpl);
public:
	Complex() {
		this->real = 0;
		this->imag = 0;
	}
	Complex(int re, int im) {
		this->real = re;
		this->imag = im;
	}
	int get_real() {
		return this->real;
	}
	int get_imag() {
		return this->imag;
	}
	void set_complex(int re, int im) {
		this->real = re;
		this->imag = im;
	}
	string string_complex() {
		string str;
		str += to_string(this->real);
		if (this->imag >= 0) {
			str += '+';
			str += to_string(this->imag);
			str += 'i';
		}
		else {
			str += to_string(this->imag);
			str += 'i';
		}
		return str;
	}
	bool operator==(const Complex& cpl) {
		return (this->real == cpl.real && this->imag == cpl.imag);
	}
	bool operator!=(const Complex& cpl) {
		return !(*this == cpl);
	}

	Complex& operator+(int i) {
		this->imag += 1;
		this->real += 1;
		return *this;
	}

};

ostream& operator<< (ostream& outstream, Complex& cpl) {
	return outstream << cpl.string_complex();
}


//int main()
//{
//	setlocale(LC_ALL, "rus");
//	/*1. ������� ������-��������� � ������������  � ��������� �������
//	� ��������� ��� �������, ��� ������� ������������ ��������� �������.*/
//	deque<long> d;
//	d.push_back(21);
//	d.push_front(43534);
//	d.push_back(3468);
//	d.push_front(4351234);
//	d.push_back(68);
//
//	/*2. ����������� ���������.*/
//	cout << "��������� 1: ";
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	/*3. �������� ���������, ������ �� ���� ���� �������� � ������� ������.*/
//	d.pop_back();
//	for (int i = 0; i < d.size(); i++) {
//		d[i] = d[i] + 1;
//	}
//	/*4. ����������� ���������, ��������� ��� ������� � ��� ��������� ���������.*/
//	deque<long>::iterator p = d.begin();
//	cout << "��������� 1: ";
//	while (p != d.end()) {
//		cout << *p++ << " ";
//	}
//	cout << endl;
//	/*5. ������� ������ ��������� ����� �� ������
//		� ��������� ��� ������� ���� �� ����, ��� � ������ ���������.*/
//	deque<long> e(d);
//	//6. �������� ������ ���������, ������ �� ���� n ��������� ����� ���������
//	//	� ������� ����� � ���� ��� �������� �� ������� ����������.
//	int n = 2;
//	int delAfter = 2;
//	p = d.begin();
//	p = p + delAfter;
//
//	d.erase(p, p + n);
//
//	for (int i = 0; i < e.size(); i++) {
//		d.push_back(e[i]);
//	}
//	/*7. ����������� ������  � ������ ����������.*/
//	cout << "��������� 1: ";
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	cout << "��������� 2: ";
//	for (int i = 0; i < e.size(); i++) {
//		cout << e[i] << " ";
//	}
//
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	Complex cm[5];
//	cm[0].set_complex(2, 6);
//	cm[1].set_complex(7, -6);
//	cm[2].set_complex(5, 2);
//	cm[3].set_complex(7, 5);
//	cm[4].set_complex(12, -5);
//
//	/*1. ������� ������-��������� � ������������  � ��������� �������
//	� ��������� ��� �������, ��� ������� ������������ ��������� �������.*/
//	deque<Complex> d;
//	d.push_back(cm[0]);
//	d.push_front(cm[1]);
//	d.push_back(cm[2]);
//	d.push_front(cm[3]);
//	d.push_back(cm[4]);
//
//	/*2. ����������� ���������.*/
//	cout << "��������� 1: ";
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	/*3. �������� ���������, ������ �� ���� ���� �������� � ������� ������.*/
//	d.pop_back();
//	for (int i = 0; i < d.size(); i++) {
//		d[i] = d[i] + 1;
//	}
//	/*4. ����������� ���������, ��������� ��� ������� � ��� ��������� ���������.*/
//	deque<Complex>::iterator p = d.begin();
//	cout << "��������� 1: ";
//	while (p != d.end()) {
//		cout << *p++ << " ";
//	}
//	cout << endl;
//	/*5. ������� ������ ��������� ����� �� ������
//		� ��������� ��� ������� ���� �� ����, ��� � ������ ���������.*/
//	deque<Complex> e(d);
//	//6. �������� ������ ���������, ������ �� ���� n ��������� ����� ���������
//	//	� ������� ����� � ���� ��� �������� �� ������� ����������.
//	int n = 2;
//	int delAfter = 2;
//	p = d.begin();
//	p = p + delAfter;
//
//	d.erase(p, p + n);
//
//	for (int i = 0; i < e.size(); i++) {
//		d.push_back(e[i]);
//	}
//	/*7. ����������� ������  � ������ ����������.*/
//	cout << "��������� 1: ";
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	cout << "��������� 2: ";
//	for (int i = 0; i < e.size(); i++) {
//		cout << e[i] << " ";
//	}
//
//	return 0;
//}


int main()
{
	setlocale(LC_ALL, "rus");

	Complex cm[5];
	cm[0].set_complex(2, 6);
	cm[1].set_complex(7, -6);
	cm[2].set_complex(5, 2);
	cm[3].set_complex(7, 5);
	cm[4].set_complex(17, -5);

	/*1. ������� ���������, ���������� ������� ����������������� ����.
	��� ���������� ���������� � ������������ � ��������� �������.*/
	deque<Complex> d;
	d.push_back(cm[0]);
	d.push_front(cm[1]);
	d.push_back(cm[2]);
	d.push_front(cm[3]);
	d.push_back(cm[4]);

	cout << "��������� 1: ";
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;

	/*2. ������������� ��� �� �������� ���������.*/
	sort(d.begin(), d.end(), 
		[](Complex a, Complex b) {
			double modA = sqrt(pow(a.get_real(), 2) + pow(a.get_imag(), 2));
			double modB = sqrt(pow(b.get_real(), 2) + pow(b.get_imag(), 2));
			return modA > modB;
		});

	/*3. ����������� ���������.*/
	cout << "��������� 1, ��������������� �� ��������: ";
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;

	/*4. ��������� ���������� ��������, ����� � ���������� �������, 
	��������������� ��������� �������.*/
	deque<Complex>::iterator p = find_if(d.begin(), d.end(),
		[](Complex a) {
			return a.get_imag() == 2;
		});

	cout << "��������� �������: " << p->string_complex();
	cout << endl;

	/*5. ����������� ��������, ��������������� ��������� ������� � ������(�������������� ������) ���������.
	��� ������� ���������� ������������ ��������� �������.*/
	deque<Complex> c(3);

	remove_copy_if(d.begin(), d.end(), c.begin(),
		[](Complex a) {
			return a.get_real() == 7;
		});

	/*6. ����������� ������ ���������.*/
	cout << "��������� 2: ";
	for (int i = 0; i < c.size(); i++) {
		cout << c[i] << " ";
	}
	cout << endl;

	/*7. ������������� ������ � ������ ���������� �� ����������� ���������.*/
	sort(d.begin(), d.end(),
		[](Complex a, Complex b) {
			double modA = sqrt(pow(a.get_real(), 2) + pow(a.get_imag(), 2));
			double modB = sqrt(pow(b.get_real(), 2) + pow(b.get_imag(), 2));
			return modA < modB;
		});

	sort(c.begin(), c.end(),
		[](Complex a, Complex b) {
			double modA = sqrt(pow(a.get_real(), 2) + pow(a.get_imag(), 2));
			double modB = sqrt(pow(b.get_real(), 2) + pow(b.get_imag(), 2));
			return modA < modB;
		});

	deque<Complex> e; //������ ���������

	/*8. ����������� ��.*/
	/*9. �������� ������ ��������� ����� ������� ������ ����.*/
	cout << "��������� 1, ��������������� �� �����������: ";
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
		e.push_back(d[i]);
	}
	cout << endl;

	cout << "��������� 2, ��������������� �� �����������: ";
	for (int i = 0; i < c.size(); i++) {
		cout << c[i] << " ";
		e.push_back(c[i]);
	}
	cout << endl;

	/*10. ����������� ������ ���������.*/
	cout << "��������� 3: ";
	for (int i = 0; i < e.size(); i++) {
		cout << e[i] << " ";
	}
	cout << endl;
	
	/*11.����������, ������� ���������, ��������������� ��������� �������, �������� ������ ���������.*/
	int count = count_if(d.begin(), d.end(),
		[](Complex a) {
			return a.get_real() == 7;
		});

	cout << "���������, ��������������� ������� \"�������������� ����� = 7\" - " << count << endl;

	/*12.����������, ���� �� � ������� ���������� �������, ��������������� ��������� �������.*/
	count = count_if(d.begin(), d.end(),
		[](Complex a) {
			return a.get_imag() == 2;
		});

	if (count == 0) {
		cout << "��������, ���������������� ������� \"������ ����� = 2\" ���" << endl;
	}
	else {
		cout << "�������(�), ���������������(��) ������� \"������ ����� = 2\" ����" << endl;
	}

	return 0;
}