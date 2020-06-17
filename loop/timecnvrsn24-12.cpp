#include<iostream>
using namespace std;
int main()
{
	int hr,min;
	cout<<"enter hour and minute :-";
	cin>>hr>>min;
	if(hr>=12)
	hr=hr-12;
	cout<<"12 hrs time is :-"<<endl;
	cout<<hr<<"\t"<<min;
	return 0;
}
