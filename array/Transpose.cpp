#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,a[20][20],b[20][20];
	cout<<"enter the no. of rows :- ";
	cin>>r;
	cout<<"enter the no. of columns :-";
	cin>>c;
	cout<<"enter elements in the array :-";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"array ="<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"transpose = "<<endl;
	cout<<"no. of rows = "<<c<<endl;
	cout<<"no. of columns = "<<r<<endl;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}	
	return 0;
}
