#include<iostream>
using namespace std;
int main()
{
	int l,i,j,size;
	cout<<"enter size :- ";
	cin>>size;
	int a[size];
	cout<<"enter elements :-";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	j=a[0];
	l=a[1];
	for(i=0;i<size;i++)
	{
		if(a[i]<j)
		{
			j=a[i];
		}
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	cout<<"smallest element is :-"<<j<<endl;
	cout<<"biggest element is :-"<<l<<endl;
	return 0;
}
