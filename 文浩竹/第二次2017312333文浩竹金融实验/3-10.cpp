#include<iostream>
using namespace std;

int gcd(int x, int y) {
	int t;
	t = (x > y) ? y : x;
	while (x%t!=0|| y%t != 0) {
	t--;
}
	return t;
}

int lcm(int x, int y) {
	int t = gcd(x, y);
	return x*y / t;
}

int main() {
	int num1, num2;
	cout << "����������������ȡ���Լ������С������" << endl;
	cin >> num1 >> num2;
	cout << "���Լ��Ϊ��" << gcd(num1, num2) <<"    "<< "��С������Ϊ��" << lcm(num1, num2);
	system("pause");
	return 0;
}