//14

//#include <iostream>
//
//using std::cout;
//
//template<class T> 
//void foo(T par)
//{
//    try
//    {
//        throw par;
//    }
//    catch (int)
//    {
//        cout << "In function\n";
//    }
//    catch (double)
//    {
//        cout << "In function\n";
//    }
//}
//
//int main()
//{
//    try
//    {
//        foo(15);
//        foo(20);
//        foo("hi");
//    }
//    catch (...)
//    {
//        cout << "In main()\n";
//    }
//
//    return 0;
//}

//2

#include <iostream>

using std::cout;

int main()
{
	try {
		(false) ? throw 3 : throw 3.1;
	}
	catch (double) {
		cout << "Double\n";
	}
	catch (int) {
		cout << "Int\n";
	}

	return 0;
}