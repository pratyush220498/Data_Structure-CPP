#include<iostream>
using namespace std;
int main()
{
	int i,n,p=0,k;
	cout<<"enter no.:";
	for(i=1;i<=5;i++)
	{
		cin>>n;
		if(n>0)
		{
			p=p+n;
		}
		else
		{
			break;
		}
	}
	k=p/i;
	cout<<"avg. is :"<<k;
return 0;
}
