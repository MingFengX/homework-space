#include<iostream>
using namespace std;
int fbn(int n){
	cout<<"����fbn("<<n<<")�Ĺ���: ";
	if(n==1||n==2){
		cout<<"���� 1"<<endl;
		return 1;
		}
	else{
		cout<<"����fbn("<<n-1<<")�͵���fbn("<<n-2<<")"<<endl;
		return fbn(n-1)+fbn(n-2);
    }
}
int main(){
	cout<<"������һ����:";
	int n;
	cin>>n;
	cout<<endl<<endl;
	cout<<"�������f("<<n<<")����"<<fbn(n)<<endl;
	return 0;
} 
