#include<iostream>;
#include<string>;
using namespace std;

void reverse(string &s) {
	static string s2;   
	int Size1 = s.length(), Size2 = s2.length();    
	if (Size1 == Size2) {
		s = s2;       
		return; 
	}    
	s2+=s.at(Size1-Size2-1);    
	reverse(s);
}
	
			

int main() {
	string str;
	cout << "����һ���ַ���:";
	cin >> str;
	cout << "ԭ��Ϊ��" << str << endl;
	reverse(str);
	cout << "����Ϊ:" << str << endl;
	system("pause");
	return 0;
}

