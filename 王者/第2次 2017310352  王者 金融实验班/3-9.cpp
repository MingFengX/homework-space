#include<iostream.h>
#include<math.h>
int prime(int i);
void main()
{
	int i;
	cout<<"������һ������:";
	cin>>i;
	if(prime(i))
		cout<<i<<"������."<<endl;
	else
		cout<<i<<"��������."<<endl;
}
int prime(int i)
{
	int j,k,flag;
	flag=1;
	k=sqrt(i);
	for(j=2;j<=k;j++)
	{
		if(i%j==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
		return 1;
	else
		return 0;
}