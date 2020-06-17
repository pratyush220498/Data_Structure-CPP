#include<iostream>
using namespace std;
int main()
{
	int i,n,sum,r;
	cout<<"enter the no. :- ";
	cin>>n;
	do
	{
		sum=0;
		for(i=n;i>0;i=i/10)
		{
			r=i%10;
			sum=sum+(r*r);
		}
		n=sum;
	}
	while(n!=1&&n!=4);
	
		if(n==1)
		cout<<"it is a happy no.";
		if(n==4)
		cout<<"it is a sad no.";
	
	return 0;
}
