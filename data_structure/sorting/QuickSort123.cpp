#include<iostream>
using namespace std;
int partition(int a[],int first,int last)
{
	int pivot=a[last];
	int i=first,j=i-1;
	int temp;
	while(i<last)
	{
		if(a[i]<pivot)
		{
			temp=a[i];
			a[i]=a[++j];
			a[j]=temp;
		}
		i++;
	}
	temp=a[++j];
	a[j]=a[last];
	a[last]=temp;
	return j;	
}
void quickSort(int a[],int first,int last)
{
	if(first<last)
	{
		int pos=partition(a,first,last);
		quickSort(a,first,pos-1);
		quickSort(a,pos+1,last);
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
	quickSort(a,0,size-1);
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	return 0;	
}
