#include<iostream>
using namespace std;
int main()
{
	int i,r,sum=0;
	cout<<"enter five digit no. : ";
	cin>>i;
	while(i>0)
	{
		r=i%10;
		sum=sum+r;
		i=i/10;
	}
	cout<<"sum of digits are : "<<sum;
	return 0;
}
