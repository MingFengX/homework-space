#include<iostream>
using namespace std;
int x(int a,int b){
	int i;int j;
	j=(a<b?a:b);
	for(i=j;i>=1;i--)
	if(a%i==0&&b%i==0)
	return i;
} 
int y(int a,int b){
	int m;
	m=a*b/x(a,b);
	return m;
}
int main(){
	int a,b;
	cout<<"����������������"<<endl;
	cin>>a>>b;
	cout<<"�����������������Լ��Ϊ"<<x(a,b)<<",��С������Ϊ"<<y(a,b)<<endl;
}
