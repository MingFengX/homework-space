#include <iostream>
using namespace std;

class data{                         //data��Ķ��� 
public:
  data(int y=0,int m=0,int d=0)    //���캯��
  {
 year=y;
 month=m;
 day=d;
  }
  data(data &mybirthday);
  int gety() {return year;}
  int getm() {return month;}
  int getd() {return day;}
  void ouput(){cout<<"  �꣺ "<<year<<"  �£� "<<month<<"  �գ� "<<day<<endl;}
private:
  int year;
  int month;
  int day;
};

data::data(data &mybirthday)    //���ƹ��캯����ʵ��
{
   year=mybirthday.year;
   month=mybirthday.month;
   day=mybirthday.day;
 
}



class people{               //personal��Ķ���
public:                        //�ⲿ�ӿ�
  people(int n,char s,int i,data b);
  people(people &liming);
  void input();
  void output();
private:
   int number;
   char sex;
   int id;
   data birthday;              //data��Ķ���birthday
};

//�����Ĺ��캯��ʵ��
people::people(int n,char s,int i,data b):number(n),sex(s),id(i),birthday(b)
{
 
}

//�����ĸ��ƹ��캯��ʵ��
people::people(people &liming):number(liming.number),sex(liming.number),id(liming.id)
{
 
}

void people::output()
{
  cout<<"ѧ�ţ�"<<number<<"  �Ա� "<<sex<<"  ���֤�ţ� "<<id;
  birthday.ouput();
}


int main()
{
 data mybirthday(1989,07,07);
 people  zhaoxiaojun(10051030,'m',62202402,mybirthday);
 cout<<"my information is:"<<endl;
 cout<<"ע���Ա���mΪ�У�fΪŮ"<<endl;
 zhaoxiaojun.output();
 return 0;
}