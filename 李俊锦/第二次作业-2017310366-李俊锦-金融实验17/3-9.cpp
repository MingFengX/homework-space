#include "iostream"
#include "stdio.h" 
using namespace std; 
 
int fun(int n){//�жϺ���������������1�����򷵻�0 
    int ans =1;
    for(int i=2;i<n;i++)//��2��n-1�ж��ܷ�����n 
        if(n%i==0){
            ans=0;
            break;
        }
    return ans;      
}
 
int main()
{
    int n;
    cin>>n;//����n 
    if(fun(n))//�ж���� 
        cout<<n<<"������";
    else
       cout<<n<<"��������";
    return 0; 
}