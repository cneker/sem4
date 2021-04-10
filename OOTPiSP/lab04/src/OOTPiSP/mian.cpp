#include <iostream>
#include <string>

using namespace std;

template <class T> class List {
private:
	T* ptr;
	int maxSize;
	int currentSize;
public:

	List(int maxSize = 10) {
		this->currentSize = 0;
		this->maxSize = 10;
		this->ptr = new T[maxSize];
	}

	List(const List<T>& lst) {
		this->currentSize = lst.currentSize;
		this->maxSize = lst.maxSize;
		this->ptr = new T[this->maxSize];
		for (int i = 0; i < this->currentSize; i++) {
			this->ptr[i] = lst.ptr[i];
		}
	}

	~List() {
		delete this->ptr;
	}

	bool isOverflow() {
		if (this->currentSize == this->maxSize) {
			cout << "Overflow" << endl;
			return true;
		}
		return false;
	}

	void input(T* arr, int size) {
		for (int i = 0; i < size; i++) {
			if (isOverflow()) {
				break;
			}
			this->ptr[i] = arr[i];
		}
		this->currentSize = size;
	}

	void print() {
		for (int i = 0; i < this->currentSize; i++) {
			cout << this->ptr[i] << " ";
		}
		cout << endl;
	}

	List& operator+(T item) {
		if (isOverflow()) {
			return *this;
		}
		this->ptr[this->currentSize++] = item;
		return *this;
	}

	List& operator--() {
		this->currentSize--;
		return *this;
	}

	bool operator!=(const List& lst) {
		if (this->currentSize != lst.currentSize || this->maxSize != lst.maxSize) {
			return true;
		}
		else {
			for (int i = 0; i < this->currentSize; i++) {
				if (this->ptr[i] != lst.ptr[i]) {
					return true;
				}
			}
		}
		return false;
	}
};

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

};

ostream& operator<< (ostream& outstream,  Complex& cpl) {
	return outstream << cpl.string_complex();
}

template<class T>
void test(T arr[], int size, T element) {
	List<T> lst1;
	lst1.input(arr, size);
	cout << "List 1: ";
	lst1.print();

	List<T> lst2;
	lst2.input(arr, size/  2);
	cout << "List 2: ";
	lst2.print();
	lst2 = lst2 + element;
	cout << "List 2 + element " << element << ": ";
	lst2.print();

	cout << "List 1 != List 2: ";
	if (lst1 != lst2) {
		cout << "True\n";
	}
	else {
		cout << "False\n";
	}

	cout << "List 1 without the last element: " << endl;
	--lst1;
	lst1.print();
}


int main()
{
	int k[5] = { 1,2,3,4,5 };
	char j[5] = { '1','2','3','4','5' };

	test<int>(k, 5, 6);
	cout << endl;
	test<char>(j, 5, '7');
	cout << endl;

	Complex cm[3];
	cm[0].set_complex(2, 6);
	cm[1].set_complex(7, -6);
	cm[2].set_complex(5, 2);

	Complex el;
	el.set_complex(1, 3);
	test<Complex>(cm, 3, el);

	return 0;
}