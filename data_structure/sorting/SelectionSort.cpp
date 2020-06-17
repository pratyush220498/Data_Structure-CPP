#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter size :- ";
	cin>>size;
	int a[size];
	cout<<"enter array :- "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int i,j;
	for(i=1;i<=size-1;i++)
	{
		int min=a[i];
		for(j=i-1;j>=0&&a[j]>min;j--)
			a[j+1]=a[j];
		a[j+1]=min;	
	}
	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
	return 0;
}
