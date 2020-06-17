#include<iostream>
using namespace std;
#define size 7
int a[size];

void merge(int,int,int);
void ms(int,int);

int main()
{
	int i,j,k;
	cout<<" enter element :-"<<endl;
	for(i=0;i<size;i++)
	cin>>a[i];
	int f=0;
	int l=size-1;
	ms(f,l);
	for(int j=0;j<l;j++)
	cout<<a[j]<<"\t";
}

void ms(int f,int l)
{
	int mid;
	if(f<l)
	{
		mid=(f+l)/2;
		ms(f,mid);
		ms(mid+1,l);
		merge(f,mid,l);
	}
}

void merge(int f,int mid,int l)
{
	int n1,n2,k,i,j;
	n1=mid-f+1;
	n2=l-mid;
	int left[n1+1],rit[n2+1];
	k=f;
	for(i=0;i<n1;i++)
	{
		left[i]=a[k];
		k++;
	}
	left[i]=10000;
	k=mid+1;
	for(i=0;i<n2;i++)
	{
		rit[i]=a[k];
		k++;
	}
	rit[i]=10000;
	i=0,j=0;
	for(k=f;k<=l;k++)
	{
		if(left[i]<=rit[j])
		{
			a[k]=left[i];
			i++;
		}
		else
		{
			a[k]=rit[j];
			j++;
		}
	}
}
