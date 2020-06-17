#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter size :- ";
	cin>>size;
	int a[size];
	cout<<"enter elements"<<endl;
	for(int i=0;i<size;i++)
	cin>>a[i];
	for(int i=0;i<=size-2;i++)
	{
		int min=i;
		for(int j=i+1;j<=size-1;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		if(min!=i)
		{
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	cout<<"sorted array"<<endl;
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
}
