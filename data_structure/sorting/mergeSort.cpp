#include<iostream>
using namespace std;
void merge(int a[],int first,int mid,int last)
{
	int n1=mid-first+1;
	int n2=last-mid;
	int b1[n1+1],b2[n2+1];
	int k=first,i,j;
	for(i=0;i<n1;i++)
	{
		b1[i]=a[k];
		k++;
	}
	b1[i]=10000;
	k=mid+1;
	for(j=0;j<n2;j++)
	{
		b2[j]=a[k];
		k++;
	}
	b2[j]=10000;
	i=0,j=0;
	for(int k=first;k<=last;k++)
	{
			if(b1[i]<=b2[j])
			{
				a[k]=b1[i];
				i++;
			}
			else
			{
				a[k]=b2[j];
				j++;	
			}	
	}
}
void mergeSort(int a[],int first,int last)
{
	int mid;
	if(first<last)
	{
		mid=(first+last)/2;
		mergeSort(a,first,mid);
		mergeSort(a,mid+1,last);
		merge(a,first,mid,last);
	}
}
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
	mergeSort(a,0,size-1);
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	return 0;	
}
