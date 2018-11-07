#include<iostream>
using namespace std;
class Date
{private:
	int year;
	int month;
	int day;
public:
	Date(){}
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
	char ID;
public:
	Person() {}
	Person(int n, int y, int m, int d, char id, char s = 'm') :birthday(y, m, d)
	{
		num = n;
		sex = s;
		ID = id;
	}
	Person(Person&p)
	{
		num = p.num;
		sex = p.sex;
		birthday = p.birthday;
		ID = p.ID;
	}
	void input()
	{
		cout << "����¼��:" << endl;
		cout << "��ţ�";
		cin >> num;
		cout << "�Ա�";
		cin >> sex;
		cout << "�������ڣ�";
		birthday.set();
		cout << "���֤�ţ�";
		cin >> ID;
		cout << endl;
}
	void output()
	{
		cout << "��ţ�" << num << endl;
		cout << "�Ա�" << sex << endl;
		cout << "�������ڣ�";
		birthday.display();
		cout << endl;
		cout << "���֤��" << ID << endl;
}
	~Person()
	{
		cout << num << "����Ա��¼��" << endl;
	}
};

int main()
{
	Person p1;
	p1.input();
	p1.output();

	return 0;
}