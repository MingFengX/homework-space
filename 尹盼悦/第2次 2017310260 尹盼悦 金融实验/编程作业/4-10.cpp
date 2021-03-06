// ConsoleApplication45.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>
#define OK  1
using namespace std;

class People
{
public:
	People(int NewNumber, char NewSex, string NewData, string NewID);
	People()
	{
		Number = 001;
		Sex = 'M';
		Data = "2018-10-01";
		ID = "23333333";
	}
	~People(){}
	People( People &YOU );
	void INPUT(int NewNumber, char NewSex, string NewData, string NewID);
	void input();
	void OUTPUT();

private:
	int Number;
	char Sex;
	string Data;
	string ID;
};
People::People(int NewNumber, char NewSex, string NewData, string NewID)
{
	Number = NewNumber;
	Sex = NewSex;
	Data = NewData;
	ID = NewID;
}

void People::INPUT(int NewNumber=001,char NewSex='M',string NewData="2018-10-01",string NewID="23333333")
{
	Number = NewNumber;
	Sex = NewSex;
	Data = NewData;
	ID = NewID;
}

void People::input()
{
	cout << "请输入相关人员信息：" << endl;
	cout << "》》编号：";
	cin >> Number;
	cout << "》》性别：";
	cin >> Sex;
	cout << "》》生日：";
	cin >> Data;
	cout << "》》ID号：";
	cin >> ID;

	cout << "\n" << endl;
}

inline void People::OUTPUT()
{
	cout << "编号**性别**出生年月**身份证号******" << endl;
	cout << " " << Number << "    " << Sex << "     " << Data << "   " << ID << endl;
}
People::People(People &YOU)
{
	Number = YOU.Number;
	Sex = YOU.Sex;
	Data = YOU.Data;
	ID = YOU.ID;
	cout << "拷贝函数被调用！" << endl;
}

int main()
{
	People I, YOU;
	cout << "默认人员的相关信息为：" << endl;
	I.input();
	I.OUTPUT();
	cout << "\n输入人员的相关信息：" << endl;
	I.INPUT(001, 'M', "2018-10-01", "23333333");
	I.OUTPUT();
	cout << "\n输入相关人员的信息：" << endl;
	YOU.input();
	YOU.OUTPUT();
	return OK;
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
