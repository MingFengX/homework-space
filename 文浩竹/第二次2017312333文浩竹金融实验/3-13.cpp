#include<iostream>
using namespace std;
double fibonacci(int n) {
	if (n == 1|| n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int num;
	cout << "������һ������������Fibonacci������" << endl;
	cin >> num;
	cout << "������ֵΪ��" << fibonacci(num) << endl;
	system("pause");
	return 0;
}