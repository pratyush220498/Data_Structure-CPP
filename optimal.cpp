#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],i=0,j=0;
	cout<<"enter 5 no. :- ";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	b[j]=a[0]+a[1];
	while(i<5)
	{
		j++;
		if(b[j-1]+a[i]<=a[i]+a[i+1])
		{
			b[j]=b[j-1]+a[i];
		}
		else
		{
			b[j]=a[i]+a[i+1];
			i++;
		}
		cout<<b[j]<<"\t";
	}
	for(int k=0;k<j;k++)
	{
		cout<<b[k]<<"\t";
	}
	
}
