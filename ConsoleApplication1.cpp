using namespace std;
#include <iostream>
#include<math.h>
int func(int base, int exp)
{
	if (exp > 1)
	{
		return base * func(base, exp - 1);
	}
	else
	{
		return base;
	}
}
int main()
{
	int exp, base;
	cout << "enetr base : \n";
		cin >> base;
		cout << "enetr exponent : \n";
		cin >> exp;
		cout << base << "^" << exp << " = " <<func(base,exp) ;
}

