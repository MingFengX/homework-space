#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int num, a;
	srand(time(0));
	num = rand() % 100 + 1; //1~100�������һ����
	cout << num << endl;
	while (num)
	{
		cout << "�û�����һ������";
		cin >> a;
		if (a > num)
		{
			cout << "���ڸ�����" << endl;
		}
		else if (a < num)
		{
			cout << "С�ڸ�����" << endl;
		}
		else
		{
			num = num - a;
			cout << "�ɹ��¶ԣ�" << endl;
		}
	}

	return 0;
}