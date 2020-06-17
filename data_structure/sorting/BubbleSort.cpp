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
	int flag=1;
	int count=0;
	for(int i=0;i<=size-2;i++)
	{
		if(flag!=0)
		{
			for(int j=0;j<=size-i-2;j++)
			{
				flag=0;
				if(a[j]>a[j+1])
				{
					flag=1;
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;	
				}	
			}	
			count++;
		}	
	}
	cout<<"Sorted Array"<<endl;
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	cout<<endl;	
	cout<<count;	
}
