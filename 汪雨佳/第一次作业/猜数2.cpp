// 猜数2.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 50, n;
	cout << "请猜这个数（1-100）" << endl;
	cin >> n;

	do
	{
		if (n < a) {
			cout << "您猜的数偏小了" << endl;
			cout << "请继续猜" << endl;
			cin >> n;
		}
		else if (n > a)
		{
			cout << "您猜的数偏大了" << endl;
			cout << "请继续猜" << endl;
			cin >> n;
		}
	} while (n != a);
	cout << "恭喜您，猜对啦！" << endl;
	return 0;
}