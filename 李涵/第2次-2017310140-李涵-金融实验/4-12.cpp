// ConsoleApplication5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class DataType {
	enum {
		character, integer, floating_point
	}idata;
	union {
		char c; int i; float f;
	};
	public:
		DataType(char cc) {
			idata = character;
			c = cc;
		}
		DataType(int ii) {
			idata = integer;
			i = ii;
		}
		DataType(float ff) {
			idata = floating_point;
			f = ff;
		}
		void iData();
};
void DataType::iData() {
	switch(idata) {
	case character:
			cout << "�ַ��ͣ�" << c;
			break;
	case integer:
			cout << "���ͣ�" << i;
			break;
	case floating_point:
			cout << "�����ͣ�" << f;
			break;
	}
}
int main()
{
	DataType x('v'), y('1'), z(1.76F);
	x.iData();
	y.iData();
	z.iData();
	return 0;
}