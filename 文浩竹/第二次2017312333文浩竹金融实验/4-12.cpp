#include<iostream>
using namespace std;
class DataType{
public:
	DataType(int newInt);
	DataType(double newDouble);
	DataType(char newChar);
	
private:
	char charDate;
	int integerDate;
	double doubleDate;
};

DataType:: DataType(int newInt) {
	integerDate = newInt;
	cout << "�Ѿ�������һ�����͵Ķ���" << integerDate << endl;
}

DataType::DataType(double newDouble) {
	doubleDate = newDouble;
	cout << "�Ѿ�������һ�������͵Ķ���" << doubleDate << endl;
}

DataType::DataType(char newChar) {
	charDate = newChar;
	cout << "�Ѿ�������һ���ַ��͵Ķ���" << charDate << endl;
}

int main() {
	DataType data1 = DataType(1);
	DataType data2 = DataType(2.0);
	DataType data3 = DataType('c');
	system("pause");
	return 0;
}
