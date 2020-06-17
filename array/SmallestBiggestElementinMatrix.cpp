#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	cout<<"enter the no. of rows :- ";
	cin>>i;
	cout<<"enter the no. of columns :-";
	cin>>j;
	int a[i][j];
	cout<<"enter elements in matrix :-";
	for(m=0;m<i;m++)
	{
		for(n=0;n<j;n++)
		{
			cin>>a[m][n];
		}
	}
	cout<<"entered elements in matrix are :-"<<endl;
	for(m=0;m<i;m++)
	{
		for(n=0;n<j;n++)
		{
			cout<<a[m][n]<<"\t";
		}
		cout<<endl;
	}
	int small;
	small=a[0][0];
	int big;
	big=a[1][1];
	for(k=0;k<i;k++)
	{
		for(l=0;l<i;l++)
		{
			if(small>a[k][l])
				small=a[k][l];
			if(big<a[k][l])
				big=a[k][l];
		}
	}
	cout<<"smallest element in the matrix = "<<small<<endl;
	cout<<"biggest element in the matrix = "<<big<<endl;
	return 0;
}
