// ConsoleApplication3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int fib(int i);
int fib(int i)
{
	cout << "fib(" << i << ")";
	if (i < 3)
	{
		cout << "=1.\n";
		return (1);
	}
	else
	{
		cout << "=fib(" << i - 1 << ")+fib(" << i - 2 << ").\n";
		return (fib(i - 1) + fib(i - 2));
	}
}
int main()
{
	int n, ans;
	cout << "�������֣�";
	cin >> n;
	ans = fib(n);
	cout << "��Fibonacci������" << ans;
	return 0;
}