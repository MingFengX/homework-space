#include"pch.h"
#include<iostream>
using namespace std;

int main() {
	int i, j;
	cout << "输出100以内的质数" << endl;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j < i; j++) {
			if (i%j == 0)
				break;
		}
		if (i == j)
			cout << " " << i;
	}
}