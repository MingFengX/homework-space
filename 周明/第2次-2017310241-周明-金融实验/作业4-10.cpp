// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
class Date {
public:void SetDate( int M, int D,int Y = 1999) {
		  month = M;
		   day = D;
		   year = Y;
	   }
	   void ShowDate( int month, int day,int year) {
		   cout << year << "/" << month << "/" << day;
	   }
private:int year; int month; int day;
};
class Human {
public:Human(char S, int ID,Date B, int N = 00 ) {
	S = 'girl';
	N = 00;
	ID = 2017310241;
	B.ShowDate(10,15);
};//这里面的形参变量都用与setinformation的一样，因为这才是外界能够得到的共有数据；;
	   Human(Human&H1) {
		   sex = H1.sex; number = H1.number; birthday = H1.birthday; ID = H1.ID;
	   }
	   void SetInformation(char S, int I, int N, Date B){
	sex = S;
	number = N;
	birthday = B;
	ID = I; };
	   void ShowInformation(){
	cout << "性别:" << sex << endl;
cout << "出生日期:" << birthday.ShowDate << endl;
cout << "身份证号:" << ID << endl;
cout << "编号:" << number << endl; };
	   ~Human() {};
private:char sex;
		Date birthday;
		int ID;
		int number;
};
int main(){
	Human H1();
	Human H2;
	H1.ShowInformation();
	H2.SetInformation('boy',2017310888,01,(02,24,2000));
	Human H3(H1);
	H3.ShowInformation();
};

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
