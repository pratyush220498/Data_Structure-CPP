#include<iostream>
using namespace std;
int main()
{
	int i,n,p=1;
	cout<<"enter 5 no.:";
	for(i=1;i<=5;i++)
	{
		cin>>n;
		if(n!=0)
		{
			p=p*n;
		}
		else
		{
			continue;
		}
	}
	cout<<"multiplication is :"<<p;
return 0;
}
