// 2-29.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int i, j, k, flag;
	i = 2;
	while (i <= 100)
	{
		flag = 1;
		k = sqrt(i);
		j = 2;
		while (j <= k)
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
			j++;
		}
		if (flag)
			cout << i << "是质数." << endl;
		i++;
	}
    return 0;
}

