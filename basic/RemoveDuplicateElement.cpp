#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int a[size],c[size];
	int max=0;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		max=a[i];
	}
	int b[max+1];
	for(int i=0;i<size;i++)
		b[a[i]]++;
		int k=0;
	for(int i=0;i<size;i++)
	{
			if(b[a[i]]==1)
			{
					c[i]=a[i];
					k++;
			}
			else if(b[a[i]]>=2)
				{
					c[i]=a[i];
					b[a[i]]=0;
					k++;	
				}	
	}
	for(int i=0;i<k;i++)
		cout<<c[i]<<" ";	
}
