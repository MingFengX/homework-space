// 6-21ͳ����ĸ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
	string s1;
	int n = 0;
	cout << "����һ��Ӣ�ľ��ӣ�" << endl;
	getline(cin, s1);
	for (int i = 0; s1[i]; i++){
		if (s1[i] >= 'a'&&s1[i] <= 'z' || s1[i] >= 'A'&&s1[i] <= 'Z')
			n++;
	}
	cout << "������ӵ���ĸ����Ϊ" << n << endl;
	return 0;
}


