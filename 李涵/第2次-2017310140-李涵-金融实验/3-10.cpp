// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int max_div(int i, int j);
int max_div(int i, int j)
{
	int temp;
	if (i<j)
	{
		temp = j;
		j = i;
		i = temp;
	}
	while (j != 0);
	{
		i = j;
		j = i%j;
	}
	return i;
}
int main()
{
	int i, j, k, l;
	cout << "����������";
	cin >> i;
	cout << "������һ��������";
	cin >> j;
	k=max_div(i, j);
	cout << k << "�����Լ����" << endl;
	l = i*j / k;
	cout << l << "����С��������" << endl;
	return 0;
}