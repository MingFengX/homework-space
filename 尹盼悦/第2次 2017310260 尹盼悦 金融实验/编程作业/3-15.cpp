// ConsoleApplication38.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int getPower(int x, int y) {
	if (y < 0)
		return 0;
	else if (y == 1)
		return x;
	else
		return x * getPower(x, y - 1);
}
double getPower(double x, int y) {
	if (y == 1)
		return x;
	else
		return x * getPower(x, y - 1);
}

int main()
{
	int a, b;
	cout<<"请输入两个数：";
	cin >> a >> b;
	cout << getPower(a, b) << endl;
	int m, n;
	cout <<"请输入两个数：";
	cin >> m >> n;
	cout<< getPower(m, n) << endl;
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
