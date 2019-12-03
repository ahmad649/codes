#include<iostream>
using namespace std;
int sum(int a)
{
	if (a > 0)
	{
		return a + sum(a - 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	cout << "enter a positive number : ";
	cin>> num;
	cout << "sum is  "<<sum(num);
}
