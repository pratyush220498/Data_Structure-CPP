#include<iostream>
#include<string.h>
using namespace std;
class trainer
{
	char tname[20];
	int days;
	protected:
		float renumeration;
		void assign()
		{
			renumeration=days*100;
		}
	public:
		void enter()
		{
			cout<<"enter trainer name - ";
			cin>>tname;
			cout<<"no. of days - ";
			cin>>days;
		}
		void display()
		{
			cout<<"trainer - "<<tname<<"\t"<<"days - "<<days<<endl;
		}	
};
class learner
{
	char lname[20];
	public:
		void lentry()
		{
			cout<<"enter learner name - ";
			cin>>lname;
		}
		void ldisplay()
		{
			puts(lname);
		}
};
class institute:public trainer,public learner 
{
	char iname[20];
	public:
		void enter()
		{
			cout<<"enter institue - "<<endl;
			cin>>iname;
			assign();
		}
		void display()
		{
			puts(iname);
			cout<<"renumeration - "<<renumeration;
		}
};
int main()
{
	institute i;
	i.trainer::enter();
	i.lentry();
	i.institute::enter();
	i.trainer::display();
	i.ldisplay();
	i.institute::display();
	return 0;
}
