#include<iostream>
using namespace std;
class person
{
	char name[20];
	int age;
	public:
	void read()
	{
		cin>>name>>age;
	}
	void show()
	{
		cout<<name<<"\t"<<age;
	}
};
class student: public person
{
	int roll,marks;
	public:
		void getdata()
		{
			cin>>roll>>marks;
		}
		void calgrade()
		{
			if(marks<40)
			cout<<"c";
			else if(marks<75)
			cout<<"b";
			else
			cout<<"a";
		}
		void showdata()
		{
			cout<<roll<<"\t"<<marks<<endl;
		}
};
class teacher:public person
{
	int basic;
	float hra,net;
	public:
		void enter()
		{
			cin>>basic;
		}
		void calsalary()
		{
			hra=basic*60/100;
			net=basic+hra;
		}
		void show1()
		{
			cout<<"salary="<<net<<endl;
		}
};
int main()
{
	teacher t;
	student s;
	s.read();
	s.getdata();
	s.calgrade();
	t.read();
	t.show();
	t.enter();
	t.calsalary();
	s.show();
	s.showdata();
	t.show1();
	return 0;
}
