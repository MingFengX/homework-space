#include<iostream>
using namespace std;
int getpower(int, int);
double getpower(double, int);
int main()
{
	int a, m;
	double b;
	cout << "������һ������a��һ��ʵ��b��Ϊ������һ������m��Ϊָ����" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "m=";
	cin >> m;
	cout << "a^m=" << getpower(a, m) << endl;
	cout << "b^m=" << getpower(b, m);
	system("pause");
	return 0;
}
int getpower(int x, int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return(x *getpower(x, y - 1));
}
double getpower(double x, int y)
{
	if (y < 0)
		return (1 / getpower(x, -y));
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return(x * getpower(x, y - 1));
}