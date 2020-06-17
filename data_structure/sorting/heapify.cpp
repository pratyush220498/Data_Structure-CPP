#include<iostream>
using namespace std;
void heapsort(int[],int);
void buildheap(int[],int);
void heapify(int[],int);
void swap(int[],int[]);
int main()
{
	int i,j,k,a[10];
	cout<<"enter size :-"<<endl;
	cin>>k;
	cout<<"enter elements :-"<<endl;
	for(i=0;i<k;i++)
	cin>>a[i];
	heapsort(a,k);
	cout<<"sorted array :-"<<endl;
	for(i=0;i<k;i++)
	cout<<a[i]<<"\t";
}
void heapsort(int a[],int k)
{
	k=k-1;
	buildheap(a,k);
	while(k>=1)
	{
		swap(a[0],a[k]);
		k--;
		heapify(a,0);
	}
}
void buildheap(int a[],int k)
{
	int i;
	for(i=k/2;i>=0;i--)
	heapify(a,i);
}
void heapify(int a[],int i)
{
	int l,r,max;
	l=2*i+1;
	r=2*i+2;
	max=i;
	if(a[l]>a[max]&&l<=i)
	max=l;
	if(a[r]>a[max]&&r<=i)
	max=r;
	if(max!=i)
	{
		swap(a[i],a[max]);
		heapify(a,max);
	}
}
void swap(int b[],int c[])
{
	int temp,i,j;
	temp=b[i];
	b[i]=c[j];
	c[j]=b[i];
}
