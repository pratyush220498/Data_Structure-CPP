#include<iostream>
using namespace std;
#define size 7

void qs(int,int);
int partition(int,int);
void swap(int[],int[]);
void display();

int a[7];

int main()
{
	int i;
	cout<<"enter 7 elements in the array :-"<<endl;
	for(i=0;i<size;i++)
	cin>>a[i];
	int f=0,l=size-1;
	qs(f,l);
	display();
	return 0;
}

void qs(int f,int l)
{
	int pos;
	if(f<l)
	{
		pos=partition(f,l);
		qs(f,pos-1);
		qs(pos+1,l);
	}
}

int partition(int f,int l)
{
	int j=f,i=j-1;
	int pivot=a[l];
	while(j<=l-1)
	{
		if(a[j]<pivot)
		{
			swap(a[j],a[++i]);
		}
		j++;
	}
	swap(a[++i],a[l]);
	return i;
}

void swap(int a[],int b[])
{
	int temp,i,j;
	temp=a[i];
	a[i]=b[j];
	b[j]=temp;
}

void display()
{
	int i;
	for(i=0;i<size;i++)
	cout<<a[i]<<"\t";
}
