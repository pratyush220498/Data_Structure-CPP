#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,a[20][20];
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
	cout<<"array = "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	cout<<"address of array = "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<&a[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
