#include<iostream>
using namespace std;
void prime(int);
int main()
{
	int i;
	cout<<"enter a no. :";
	cin>>i;
	prime(i);
	return 0;
}
void prime(int i)
{
	int j,k,l,flag,tag=1;
	cout<<"factors =";
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
			tag=0;
			break;
		}
	}
	if(tag==1)
	{
	    cout<<"1 "<<i;
	}
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
			flag=1;
			for(l=2;l<=j/2;l++)
			{
				if(j%l==0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				cout<<j<<"\t";
			}
		}
	}	
}
