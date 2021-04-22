//#include <iostream>
//#include <memory>
//
//using namespace std;
//
//int main()
//{
//	int size = 5;
//	int* array = new int[size] { 1, 2, 3, 4, 5 };
//
//	unique_ptr<int[]> ptr1(array);
//
//	for (int i = 0; i < size; i++) {
//		cout << ptr1[i] << endl;
//	}
//
//	int K;
//	cout << "\nEnter K: ";
//	cin >> K;
//	size += K;
//
//	unique_ptr<int[]> ptr2 = make_unique<int[]>(size);
//
//	for (int i = K, j = 0; i < size; i++, j++) {
//		ptr2[i] = ptr1[j];
//	}
//
//	for (int i = 0; i < K; i++) {
//		ptr2[i] = i;
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < size; i++) {
//		cout << ptr2[i] << endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <memory>
//
//using namespace std;
//
//int main()
//{
//	int size = 5;
//	unique_ptr<unique_ptr<int[]>[]> ptr1 = make_unique<unique_ptr<int[]>[]>(size);
//	for (int i = 0; i < size; i++) {
//		ptr1[i] = make_unique<int[]>(size);
//	}
//
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			ptr1[i][j] = i + j;
//		}
//	}
//
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			cout << ptr1[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	int K1, K2;
//
//	cout << "Enter K1, K2: "; 
//	cin >> K1 >> K2;
//
//	unique_ptr<unique_ptr<int[]>[]> ptr2;
//
//	int size2 = size - (K2 - K1 + 1);
//
//	if (K1 < K2 && K2 <= size) {
//		ptr2 = make_unique<unique_ptr<int[]>[]>(size2);
//		for (int i = 0; i < size2; i++) {
//			ptr2[i] = make_unique<int[]>(size);
//		}
//		int i, c;
//		for (i = 0; i != K1; i++) {
//			for (int j = 0; j < size; j++) {
//				ptr2[i][j] = ptr1[i][j];
//			}
//		}
//		for (i, c = K2 + 1; i < size2; i++, c++) {
//			for (int j = 0; j < size; j++) {
//				ptr2[i][j] = ptr1[c][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < size2; i++) {
//		for (int j = 0; j < size; j++) {
//			cout << ptr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

#include <iostream>
#include <memory>

using namespace std;

int main()
{
	int N, M;
	cout << "Enter N, M: ";
	cin >> N >> M;
	int size = 5;
	unique_ptr<unique_ptr<int[]>[]> ptr1 = make_unique<unique_ptr<int[]>[]>(N);
	for (int i = 0; i < N; i++) {
		ptr1[i] = make_unique<int[]>(M);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			ptr1[i][j] = i + j;
		}
	}

	for (int i = 0; i < 3; i++) { //делает первые 3 строки симметричными
		for (int j = 0; j < M; j++) {
			ptr1[i][j] = i;
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << ptr1[i][j] << " ";
		}
		cout << endl;
	}

	unique_ptr<int[]> ptr = make_unique<int[]>(N);

	bool c = true;

	for (int i = 0; i < N; i++) {
		c = true;
		for (int j = 0; j < M / 2; j++) {
			if (ptr1[i][j] != ptr1[i][M - 1 - j]) {
				c = false;
				break;
			}
		}
		c ? ptr[i] = 1 : ptr[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		cout << ptr[i] << " ";
	}

	return 0;
}