#include<iostream>
using namespace std;
class Serial
{
	int code,duration,num;
	char t[20];
	public:
		void newserial()
		{
			cin>>code>>duration>>num;
			cin>>t;
		}
		void display()
		{
			cout<<code<<"\t"<<duration<<"\t"<<num<<"\t";
			cout<<t;
		}
};
int main()
{
	Serial sr;
	sr.newserial();
	sr.display();
	return 0;
}
