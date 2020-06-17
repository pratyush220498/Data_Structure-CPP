#include<iostream>
using namespace std;
int main()
{
	int i,r=0,digit;
	cout<<"enter five digit no. : ";
	cin>>i;
	while(i>0)
	{
		digit=i%10;
		r=r*10+digit;
		i=i/10;
	}
	cout<<"sum of digits are : "<<r;
	return 0;
}
