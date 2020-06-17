#include<iostream>
using namespace std;
int b[100];
void display(int[],int);
void lcm(int[],int,int,int,int);
int main()
{
	int i,j,k=0,m=0,p=0,big=0;
	cout<<"enter total number :- ";
	cin>>i;
	int a[i];
	cout<<"enter the number :- ";
	for(int l=0;l<i;l++)
	{
		cin>>a[l];
		if(a[l]>big)
		big=a[l];
	}
	cout<<big<<endl;
	int b[big];
	for(int l=0;l<=big;l++)
	b[l]=0;
	lcm(a,m,big,i,p);
	return 0;
}
void lcm(int a[],int m,int big,int i,int p)
{
	for(int j=2;j<=big;j++)
	{
			int count=0;
			int p=0;
		for(int l=0;l<i;l++)
		{
			if(a[l]%j==0)
			{
				a[l]=a[l]/j;
				count++;
				if(a[l]==1)
				p++;
			}
			cout<<a[l]<<"\t";
		}
		cout<<endl;
		cout<<"m="<<m<<"\t"<<"p="<<p<<"\t"<<"count="<<count<<"\t"<<"j="<<j<<endl;
		if(count>=1)
			{
				m++;
				b[m]=j;
				cout<<"b="<<b[m]<<endl;	
			}		
	}
	
}

