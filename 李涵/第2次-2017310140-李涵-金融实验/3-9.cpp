// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
//�ж�һ�����Ƿ�������
int prime(int i);
int prime(int i)
{
	int j, k;
	k = 1;
	for (j = 2; j <= i; j++)
	{
		if (i%j == 0)
		{
			k = 0;
			break;
		}
	}
	return k;
}
int main()
{
	int i;
	cout << "����һ��������";
	cin >> i;
	if (prime(i))
		cout << i << "��������";
	else
		cout << i << "����������";
}
