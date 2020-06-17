#include<iostream>
using namespace std;
void symmetric();
int main()
{
	int r,c,i,j,a[20][20],flag=0;
	cout<<"enter the no. of row and column :- ";
	cin>>r;
	cout<<"enter the elemnts in array :- ";
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"entered array is :- "<<endl;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				flag=1;
				break;
			}	
		}
	}
		if(flag==1)
		cout<<"it is not symmetric .";
		else
		cout<<"it is symmetric .";
	return 0;
}

