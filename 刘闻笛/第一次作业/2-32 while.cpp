#include"pch.h"
#include<iostream>
using namespace std;

int main() {
	int i = 18;
	int n = 0, m;
	while (n != i) {
		cout << "猜猜这个数是多少？（0~100）：";
		cin >> m;
		if (m > i)
			cout << "你猜大了！" << endl;
		else if (m < l)
			cout << "你猜小了！" << endl;
		else
			cout << "你猜对了！" << endl;
	}
	return 0;
}