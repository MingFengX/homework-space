#include<iostream>
#include<cmath>
using namespace std;

int prime(int i);
 
int main()
{
	int i;
	cout << "����һ������" << endl;
	cin >> i;
	if (prime(i))
		cout << i << "������" << endl;
	else
		cout << i << "��������" << endl;
	return 0;
}

int prime(int i)
{
	int a, b, c;
	c = 1;
	b = sqrt(i);
	for(a=2;a<=b;a++)
	{
		if (i%a == 0) 
		{ 
			c = 0;
		    break;
		}
	}
	return c;
}