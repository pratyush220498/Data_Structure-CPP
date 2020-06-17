#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"enter number :- ";
	cin>>num1;
	int rem,temp=0,base=1;
	while(num1>0)
	{
		rem=num1%2;
		temp+=rem*base;
		base*=10;
		num1/=2;	
	}
	cout<<"binaryn number "<<temp;	
	return 0;
}
