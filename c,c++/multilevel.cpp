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
		void display()
		{
			cout<<name<<"\t"<<age<<endl;
		}
};
class student:public person
{
	int roll,marks;
	public:
		void getdata()
		{
			cin>>roll>>marks;
		}
		void showdata()
		{
			cout<<roll<<"\t"<<marks<<endl;
		}
};
class teacher:public student
{
	float basic,hra,net;
	public:
		void enter()
		{
			cin>>basic;
		}
		void cal()
		{
			hra=basic*60/100;
			net=basic+hra;
		}
		void show()
		{
			cout<<net;
		}
};
int main()
{
	teacher t;
	t.read();
	t.display();
	t.getdata();
	t.showdata();
	t.enter();
	t.cal();
	t.show();
	return 0;
}
