#include<iostream>
using namespace std;
class datapyte {
	enum {
		character,
		integer,
		point
	}vartype;
	union {
		char c;
		int i;
		float f;
	};
public:
	
	void datatype(char ch) {
		vartype = character;
		c = ch;
	}
	void datatype(int ii) {
		vartype = integer;
		i = ii;
	}
	void datatype(float ff) {
		vartype = point;
		f = ff;
	}
	void print();
	private:
		char ch;
		int ii;
		float ff;
};
void datapyte::print() {
	switch (vartype) {
	case character:
		cout << "�ַ��ͣ�" << c << endl;
		break;
	case integer:
		cout << "���ͣ�" << i <<endl;
		break;
	case point:
		cout << "������:" << f << endl;
		break;
	}
}
int main() {
	

}
