// 3-13：power函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int getpower(int x, int y) {
	int z = 1;
	int p = 1;
	if (y<0)                
		return 0;           /*题目说y小于零的时候直接return0,所以就没有再仔细写出实际情况*/
	else {
		for (; z <= y; z++) {
			p *= x;
		}
		return p;
	}
}

double getpower(double x, int y) {
	int z = 1;
	double p = 1.0;
	if (y < 0)
		for (; z <= abs(y); z++) {
			p /= x;
		}
	else {
		for (; z <= y; z++) {
			p *= x;
		}
	}
	return p;
}

int main() {
	int a,m;
	double b;
	cout << "现在计算整数a和实数b的m次方" << endl;
	cout << "请输入整数a:";
	cin >> a;
	cout << "请输入实数b：";
	cin >> b;
	cout << "请输入整数m：";
	cin >> m;
	cout <<"a^m="<< a << "^" << m << "=" << getpower(a, m) << endl;
	cout << "b^m=" << b << "^" << m << "=" << getpower(b, m) << endl;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
