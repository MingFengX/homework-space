#include<iostream.h>

int getPower(int x,int y);
int main()
{
	int x,y, answer;
	cout<<"������һ������:";
	cin>>x;
	cout<<"��������һ������:";
	cin>>y;
	answer=getPower(x,y);
	cout<<answer<<endl;
	return 0;
}
int getPower(int x, int y)
{
	if(y==1)
		return x;
	else
		return(x*getPower(x,y-1));
}
	
