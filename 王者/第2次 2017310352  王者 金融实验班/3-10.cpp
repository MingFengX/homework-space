#include<iostream.h>
#include<math.h>
int fnl(int i,int j);
void main()
{
	int i,j,x,y;
	cout<<"������һ������:";
	cin>>i;
	cout<<"��������һ������:";
	cin>>j;
	x=fhl(i,j);
	y=i*j/x;
	cout<<"���Լ����:"<<x<<endl;
	cout<<"��С��������:"<<y<<endl;
}
int fnl(int i,int j)
{
	int temp;
	if (i<j)
	{
		temp=i;
		i=j;
		j=i;
	}
	while(j!=0)
	{
		temp=i%j;
		i=j;
		j=temp;
	}
	return i;
}
	
