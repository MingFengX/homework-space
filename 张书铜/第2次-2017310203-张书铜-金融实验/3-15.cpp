#include<iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main()
{
	int a, m;
	double b;
	int c;
	double d;
	cout << "������һ������������";
	cin >> a;
	cout << "������һ��ʵ������";
	cin >> b;
	cout << "���������";
	cin >> m;
	c = getPower(a, m);
	d = getPower(b, m);
	cout << a << "��" << m << "������" << c << endl;
	cout << b << "��" << m << "������" << d << endl;
	return 0;
}

int getPower(int x,int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return (x*getPower(x, y - 1));
}

double getPower(double x, int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return (x*getPower(x, y - 1));
}