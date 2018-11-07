// 4-10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date() {}
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void set()
	{
		cin >> year >> month >> day;
	}
	void display()
	{
		cout << year << "��" << month << "��" << day << "��";
	}
};

class Person
{
private:
	int num;
	char sex;
	Date birthday;
	char ID[18];
public:
	Person() {}
	Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d)
	{
		num = n;
		sex = s;
		strcpy(ID, id);
	}
	Person(Person& p)
	{
		num = p.num;
		sex = p.sex;
		birthday = p.birthday;
		strcpy(ID, p.ID);
	}
	void input()
	{
		cout << "¼�����ݣ�" << endl;
		cout << "��ţ�";
		cin >> num;
		cout << "�Ա�(m/f)��";
		cin >> sex;
		cout << "���գ�";
		birthday.set();
		cout << "���֤�ţ�";
		cin >> ID;
		ID[18] = '\0';
		cout << endl;
	}
	void output()
	{
		cout << "��ţ�" << num << endl;
		cout << "�Ա�" << sex << endl;
		cout << "���գ�";
		birthday.display();
		cout << endl;
		cout << "���֤�ţ�" << ID << endl;
	}

	~Person() //��������
	{
		cout << " " << num << "����Ա�Ѿ�¼��" << endl;
	}
};
int main()
{
	Person p1;
	p1.input();
	p1.output();
	return 0;
}
