// 6-22����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void reverse(string & s){
	for (int l = s.length(); l >= 1;l--){
		cout << s[l-1];
	}
}

int main(){
	string s;
	cout << "������һ���ַ�����" << endl;
	cin >> s;
	reverse(s);
	return 0;
}
