// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int getPower(int x, int y);
int getPower(int x, int y)
{
	if (y<0)
	{
		return (0);
	}
	else if (y = 0)
	{
		return (1);
	}
	else if (y = 1)
	{
		return(x);
	}
	else
	{
		return(x*getPower(x, y - 1));
	}
}
double getPower(double x, int y);
double getPower(double x, int y)
{
	if (y < 0)
	{
		return(1 / getPower(x, -y));
	}
	else if (y = 0)
	{
		return(1);
	}
	else if (y = 1)
	{
		return (x);
	}
	else
	{
		return(x*getPower(x, y - 1));
	}
}
int main()
{
	int a, m, ans1;
	double b, ans2;
	cout << "����һ��������Ϊ������";
	cin >> a;
	cout << "����һ��ʵ����Ϊ������";
	cin >> b;
	cout << "����һ��������Ϊָ����";
	cin >> m;
	ans1 = getPower(a, m);
	ans2 = getPower(b, m);
	cout << "�������ݽ��Ϊ" << ans1;
	cout << "ʵ�����ݽ��Ϊ" << ans2;
	return 0;
}