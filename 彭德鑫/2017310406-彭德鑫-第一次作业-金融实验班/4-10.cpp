#include<iostream>
#include<string>
using namespace std;

class Date
{
private:
 int year,month,day;
public:
 void SetDate(int Y=0,int M=0,int D=0);
 void ShowDate();
};

inline void Date::SetDate(int Y,int M,int D)
{
 cin>>Y>>M>>D;
 year=Y;
 month=M;
 day=D;
}

inline void Date::ShowDate()
{
 cout<<year<<"-"<<month<<"-"<<day<<endl;
}

class Personnel
{
private:
 int num;
 char sex;
 Date birthday;
 string ID;
public:
 Personnel(){}
 Personnel(int n,char s,Date b,string id)
 {
  num=n;
  sex=s;
  birthday=b;
  ID=id;
 }
 Personnel (Personnel &p);
 ~Personnel()
 {
  cout<<"��¼����ϡ�"<<endl;
 }
 void SetPersonnel();
 void ShowPersonnel();
};

Personnel::Personnel (Personnel &p)
{
 num=p.num;
 sex=p.sex;
 birthday=p.birthday;
 ID=p.ID;
}

void Personnel::SetPersonnel()
{
 cout<<"¼����Ա��Ϣ��"<<endl;
 cout<<"��������Ա��ţ�"<<endl;
 cin>>num;
 cout<<"��������Ա�Ա���m�������ԣ���f����Ů�ԣ���"<<endl;
 cin>>sex;
 cout<<"��������Ա�������ڣ�"<<endl;
 birthday.SetDate();
 cout<<"��������Ա���֤�ţ�"<<endl;
 cin>>ID;
}

void Personnel::ShowPersonnel()
{
 cout<<"��Ա���:"<<num<<endl;
 cout<<"��Ա�Ա�"<<sex<<endl;
 cout<<"��Ա��������:";
 birthday.ShowDate();
 cout<<"��Ա���֤��:"<<ID<<endl;
}

int main()
{
 int flag=1;
 while(flag)
 {
 Personnel per;
 per.SetPersonnel();
 per.ShowPersonnel();
 cout<<"�������롰y�����������롰n����"<<endl;
 char c;
 cin>>c;
 if(c=='N'||c=='n') flag=0;
 }
 return 0;
}
