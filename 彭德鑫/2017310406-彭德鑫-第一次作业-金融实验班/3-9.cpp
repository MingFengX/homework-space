#include<iostream>
using namespace std;
bool prime(int x){
	bool flag;
	flag=true;
	for(int i=2;i<x;i++)
	if(x%i==0)
	{flag=false;break;
}
	return flag;
} 
int main(){int x;
cout<<"����һ������1������"<<endl;
cin>>x;
if(prime(x==true))
cout<<x<<"������"<<endl;
else
cout<<x<<"��������"<<endl;
}
