#include<iostream>
using namespace std;
class stationary
{
	char type[20],manu[20];
	public:
		void read()
		{
			cout<<"enter type and manufacture -"<<endl;
			cin>>type>>manu;
		}
		void display()
		{
			cout<<"type - "<<type<<endl;
			cout<<" manufacture - "<<manu<<endl;
		}
};
class office:private stationary
{
	int num;
	float cost;
	public:
		void readdetails()
		{
			cout<<"enter number of types - "<<endl;
			cin>>num;
			cout<<"enter cost price - "<<endl;
			cin>>cost;
			read();
		}
		void displaydetails()
		{
			cout<<"num = "<<num<<"\t"<<"price = "<<cost<<endl;
			display();
		}
};
class printer:public office
{
	int users;
	char date[10];
	public:
		void details()
		{
			cout<<"enter num of users - ";
			cin>>users;
			cout<<" delievery date - ";
			cin>>date;
		}
		void put()
		{
			cout<<"num. of user = "<<users<<endl;
			cout<<"delievery date = "<<date;
		}
};
int main()
{
	printer p;
	p.readdetails();
	p.details();
	p.displaydetails();
	p.put();
	return 0;
}
