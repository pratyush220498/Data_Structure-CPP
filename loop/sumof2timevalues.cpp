#include<iostream>
using namespace std;
int main()
{
	int hr1,hr2,min1,min2,hr3,min3;
	cout<<"enter hr and min :- ";
	cin>>hr1>>min1;
	cout<<endl;
	cout<<"enter hr and min :- ";
	cin>>hr2>>min2;
	cout<<endl;
	hr3=hr2+hr1;
	min3=min2+min1;
	if(hr3>=12)
	hr3=hr3-12;
	if(min3>=60)
	min3=min3-60;
	cout<<"summation = "<<hr3<<" "<<min3;
	return 0;
}
