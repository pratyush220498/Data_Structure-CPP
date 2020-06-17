#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int a[100];
	for(i=1;i<=100;i++)
		a[i]=0;
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=100;j++)
			{
				if(j%i==0)
				{
					if(a[j]==0)
					a[j]=1;
					else
					a[j]=0;
				}
			}
	}
	for(i=1;i<=100;i++)
	{
		if(a[i]==1)
		cout<<i<<"\t";
	}	
	return 0;
}
