#include <iostream>

int main()
{
	//Task2
	int n, m;

	std::cout << "Enter n: "; std::cin >> n;
	std::cout << "Enter m: "; std::cin >> m;

	int res1 = m - ++n;
	int res2 = ++m > --n;
	int res3 = --n < ++m;

	std::cout << "m-++n : " << res1 << std::endl
			  << "++m>--n : " << res2 << std::endl
			  << "--n<++m : " << res3 << std::endl;
}

//Task1
//double a = 1000,
//	   b = 0.0001;

//double t1 = pow(a - b, 2);
//double t2 = 2 * a * b;
//double t3 = pow(a, 2);
//double t4 = t3 - t2;
//double up = t1 - t4;
//double dw = pow(b, 2);
//double res = up / dw;

//std::cout << "Task one: " <<  res << std::endl;

//float aa = 1000,
//	  bb = 0.0001;

//float t1s = pow(aa - bb, 2);
//float t2s = 2 * aa * bb;
//float t3s = pow(aa, 2);
//float t4s = t3s - t2s;
//float ups = t1s - t4s;
//float dws = pow(bb, 2);
//float ress = ups / dws;

//std::cout << "Task two: " << ress;