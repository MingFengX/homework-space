#include<iostream>
#include<cmath>
using namespace std;
int prime_num(int x)
{
	int i, j, k;
	k = 1;
	i = sqrt(x);
	for (j = 2; j <= i; j++)
		if (x%j == 0)
		{
			k = 0;
			break;
		}
	return(k);
}


int main()
{
	int a, b, n;
	while (1)
	{
		cout << "������һ������1������:" << endl;
		cin >> n;
		if (n <= 0)
			cout << "������������ڷ�Χ" << endl;
		else
		{
			a = prime_num(n);
			if (a == 0)
				cout << n << "��������" << endl;
			else
				cout << n << "������" << endl;
		}
	}
	system("pause");
	return 0;
}