#include<iostream>
using namespace std;
void display(int[],int);
void lcm(int[],int,int[],int,int);
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
	lcm(a,m,b,big,i);
	return 0;
}
void lcm(int a[],int m,int b[],int big,int i)
{
	int p=0;
	while(p!=i)
	{
		int flag=0;
		for(int j=2;j<=big;j++)
		{
			for(int l=0;l<i;l++)
			{
				if(a[l]%j==0)
				{	
					flag=1;
					a[l]=a[l]/j;
					if(a[l]==1)
					p++;
					cout<<a[l]<<"\t";
				}
			}
			cout<<endl;		
			if(flag==1)
			{
				m++;
				b[m]=j;
				break;
			}	
		}
	}
	display(b,m);
}
void display(int b[],int m)
{
	int temp=1,k;
	cout<<"m = "<<m<<endl;;
	for(k=1;k<=m;k++)
	{
		cout<<b[k]<<endl;
		temp=temp*b[k];
	}
	cout<<"l.c.m = "<<temp; 
}

