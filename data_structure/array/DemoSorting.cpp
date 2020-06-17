#include<iostream>
using namespace std;
void sort(int[],int);
int main()
{
	cout<<": SEARCHING :"<<endl;
	int i,j,k,n,l;
	cout<<"enter size : ";
	cin>>n;
	int a[n];
	cout<<"enter elements in array :";
	for(l=0;l<n;l++)
	{
		cin>>a[l];
	}
	sort(a,n);
	return 0;
}

void sort(int a[],int n)
{
	int j,min,i,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=0;j<n;j++)
	{
		if(a[j]>a[min])
			min=j;
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
	}
	cout<<"sorted array is :-";
	for(j=0;j<n;j++)
	cout<<a[j]<<endl;
}

