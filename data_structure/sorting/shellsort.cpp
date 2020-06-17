#include<iostream>
using namespace std;
void shellsort(int[],int);
int main()
{
	int i,j,size;
	cout<<"enter size";	cin>>size;
	int a[size];
	cout<<"enter elements";
	for(i=0;i<=size-1;i++)		cin>>a[i];
	shellsort(a,size);
	return 0;
}
void shellsort(int a[],int size)
{
	int gap,i,j,temp;
	gap=size/2;
	while(gap>0)
	{
		for(i=gap;i<=size-1;i++)
		{
			j=i;
			temp=a[i];
			while(j>0&&a[j-gap]>temp)
			{
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=temp;
		}
		gap=gap/2;
	}
	for(i=0;i<=size-1;i++)
	cout<<a[i]<<"\t";
}
