#include<iostream>
using namespace std;
int F(int n){
	if(n==1||n==2) return 1;
	else return F(n-1)+F(n-2);
}
int main(){int n;
do{
	cout<<"����Fibonacci�����ı���n(������)"<<endl;
	cin>>n;
	}while(n<=0);
	cout<<"Fibonacci("<<n<<")="<<F(n)<<endl;
}
