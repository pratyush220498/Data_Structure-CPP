#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,a[20][20];
	cout<<"enter the no. of rows & columns :- ";
	cin>>r;
	cout<<"enter elements in the array :-";
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"array = "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i>=j)
			{
				cout<<a[i][j];
				cout<<"\t";
			}
			else
			cout<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
