#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"enter no. of items:";
	cin>>a;
	cout<<"enter cost per item:";
	cin>>b;
	c=a*b;
	cout<<"total price is:"<<c<<endl;
	if(a<=10)
	cout<<"net price"<<c;
	else if(a<=50)
	{
		d=c-(c*0.1);
		cout<<"net price"<<d;
	}
	else
	{
		d=c-(c*0.15);
		cout<<"net price:"<<d;
	}
	return 0;
}

