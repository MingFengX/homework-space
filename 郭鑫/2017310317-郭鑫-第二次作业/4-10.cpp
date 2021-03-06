#include "pch.h"
#include <iostream>
using namespace std;

class Date {
public:
	void birth(int y = 0, int m = 0, int d = 0);//默认函数
	void set(int y, int m, int d);
	void display();
private:
	int year,month, day;
};

void Date::birth(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::set(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::display() {
	cout << year << "年" << month << "月"<<day << "日" << endl;
}

class People {
public:
	People(){}
	People(int n, int s, Date birth, int i) {
		number = n;
		sex = s;
		birthday = birth;
		id = i;
	}
	~People(){}
	inline int GetN() { return number; }
	int Gets() { return sex; }
	int Getl() { return id; }
	void set();
	void show();
private:
	int number;
	int sex;
	Date birthday;
	int id;
};

void People::set() {
	cout << "Please input the number of the people: ";
	cin >> number;
	cout << "Please input the sex of the people(1男，2女）: ";
	cin >> sex;
	cout << "Please input the birthday of the people: ";
	int y, m, d;
	cin >> y >> m >> d;
	birthday.display;
	cout <<"Please input the id of the people: ";
	cin >> id;
}

void People::show() {
	cout << "Number: " << number << endl;
	cout << "Sex: " << sex << endl;
	cout << "Birthday: " << birthday.display() << endl;
	cout << "ID: " << id << endl;
}

int main() {
	Date a;
	People p(001, 0, a, 123456789);
	p.set();
	p.show();
	return 0;
}