#include<iostream>
#include<cmath>
using namespace std;

int f1(int i, int j);

int main()
{
	int i, j, a, b;
	cout << "������һ������" << endl;
	cin >> i;
	cout << "��������һ������" << endl;
	cin >> j;

	a = f1(i, j);
	b = i * j / a;
	cout << "���Լ����" << a << endl;
	cout << "��С��������" << b << endl;
	return 0;
}

int f1(int i, int j)
{
	int a;
	if (i < j)
	{
		a = i;
		i = j;
		j = a;
	}
	while(j!=0)
	{
		int b;
		b = i % j;
		i = j;
		j = b;
	}
	return i;
}
