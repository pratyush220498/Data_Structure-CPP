#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"even no's from 1 to 100 are :-";
	for(i=0;i<=100;i=i+2)
	cout<<i<<"\t";
	cout<<endl;
	cout<<"enter the no. to print even no. :- ";
	cin>>j;
	for(k=1;k<=j;k++)
	{
		if((k%2)==0)
		cout<<k<<"\t";
	}
	return 0;
}
