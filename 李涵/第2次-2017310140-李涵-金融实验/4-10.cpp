// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Date {
public:
	Date(int yy = 0, int mm = 0, int dd = 0){
		y = yy;
		m = mm;
		d = dd;
	}
	Date(Date&birthday);
	int gety() { return y; }
	int getm() { return m; }
	int getd() { return d; }
	void output() { cout << y << "��" << m << "��" << d << "��"; }
private:
	int y, m, d;
};
Date::Date(Date&birthday) {
	y = birthday.y;
	m = birthday.m;
	d = birthday.d;
}
class People {
public:
	People(int n, char s, int i, Date b);
	People(People&abstract);
	void input();
	void output();
private:
	int num, id;
	char sex;
	Date bir;
};
People::People(int n, char s, int i, Date b) {
	num = n;
	sex = s;
	id = i;
	bir = b;
}
People::People(People&abstract) {
	num = abstract.num;
	sex = abstract.sex;
	id = abstract.id;
	bir = abstract.bir;
}
void People::output() {
	cout << "��ţ�" << num << "�Ա�" << sex << "���֤�ţ�" << id << "�������ڣ�";
	bir.output();
}
int main()
{
	Date birthday(1999,10,15);
	People infor(353, 'm', 991015, birthday);
	cout << "The information is " << endl;
	infor.output();
	return 0;
}
	
