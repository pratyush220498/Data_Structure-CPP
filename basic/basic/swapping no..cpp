#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"swapped valuse are:";
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
	return 0;
}
