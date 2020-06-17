#include<iostream>
#include<stdlib.h>
using namespace std;
int * transpose(int *arr,int m,int n)
{
	int *temp=(int *)malloc(m*n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			*((temp+i*n)+j)=*((arr+j*n)+i);	
		}	
		cout<<endl;
	}
	return temp;
}
int main()
{
	int row,column;
	cin>>row;
	cin>>column;
	int a[row][column];
	int *p=(int *)a;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cin>>*((p+i*column)+j);	
		}	
	}
	cout<<"entered"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<*((p+i*column)+j)<<" ";	
		}	
		cout<<endl;
	}
	int *q=transpose(p,row,column);
		
}
