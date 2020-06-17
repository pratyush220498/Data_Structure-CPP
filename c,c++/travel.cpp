#include<iostream>
#include<string.h>
using namespace std;
class travelplan
{
	long int plancode;
	char place[20];
	int num,bus;
	public:
	void newplan()
	{
		cin>>plancode>>place>>num;
		if(num<=20)
		bus=1;
		else if(num>20&&num<40)
		bus=2;
		else
		bus=3;
	}
	void showplan()
	{
		cout<<plancode<<"\t"<<place<<"\t"<<num<<"\t"<<bus;
	}
};
int main()
{
	travelplan t;
	t.newplan();
	t.showplan();
	return 0;
}
