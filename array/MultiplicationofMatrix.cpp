#include<iostream>
using namespace std;
int main()
{
	int r,d,r1,d1,i,j,a[20][20],b[20][20],c[20][20],sum=0,k,l;
	cout<<"enter the no. of rows of first matrix:- ";
	cin>>r;
	cout<<"enter the no. of columns of first matrix :-";
	cin>>d;
	cout<<"enter the no. of rows of second matrix :- ";
	cin>>r1;
	cout<<"enter the no. of columns of second matrix :-";
	cin>>d1;
  	if(d==r1)
  	{
		cout<<"enter elements in the first array :-";
		for(i=0;i<r;i++)
		{
			for(j=0;j<d;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<"enter the element in second array :-";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<d1;j++)
			{
				cin>>b[i][j];
			}
		}	
	cout<<" first array :-"<<endl;
		for(i=0;i<r;i++)
	{
		for(j=0;j<d;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"second array :-"<<endl;
		for(i=0;i<r1;i++)
	{
		for(j=0;j<d1;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<d1;j++)
		{
			for(k=0;k<d;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	cout<<"multiplication of 2 arrays are :-"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<d1;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}
else
cout<<"u have entered wrong no. of rows and columns . ";
	return 0;
}
