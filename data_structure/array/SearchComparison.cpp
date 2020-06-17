#include<iostream>
using namespace std;

void linear(int[],int,int);
void binary(int[],int,int);
void interpolition(int[],int,int);
void sort(int[],int);

int count=0;

int main()
{
	cout<<": SEARCHING :"<<endl;
	int i,j,k,n,l,item;
	cout<<"enter size : ";
	cin>>n;
	int a[n];
	cout<<"enter elements in array :";
	for(l=0;l<n;l++)
	{
		cin>>a[l];
	}
	sort(a,n);
	char ch;
	do
	{
		cout<<"enter the item u want to search :";
		cin>>item;
					linear(a,n,item);
					binary(a,n,item);
					interpolition(a,n,item);
		cout<<"do you want to continue (y\n) :-"<<endl;
		cin>>ch;
	}	
	while(ch=='y'||ch=='Y');
	return 0;
}

void linear(int a[],int n,int item)
{
	cout<<"  LINEAR SEARCH  "<<endl;
	int count=0;
	int i,j,flag=0;
	for(i=0;i<n;i++)
	{
		count++;
		if(a[i]==item)
		{
			cout<<"item found at pos :"<<i+1<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"item not found"<<endl;
	cout<<"no. of comparisions :"<<count<<endl;
}

void binary(int a[],int n,int item)
{
	cout<<"  BINARY SEARCH  "<<endl;
	int count=0;
	int i,mid,j,flag=0,f,l;
	f=0;
	l=n-1;
	while(f<=l)
	{
		count++;
		mid=(f+l)/2;
		if(a[mid]==item)
		{
			cout<<"item found at pos :"<<mid+1<<endl;
			flag=1;
			break;
		}
		else if(a[mid]>item)
		l=mid-1;
		else
		f=mid+1;
	}
	if(flag==0)
	cout<<"item not found"<<endl;
	cout<<"no. of comparisions :"<<count<<endl;
}

void interpolition(int a[],int n,int item)
{
	cout<<"  INTERPOLATION SEARCH  "<<endl;
	int i,mid,j,flag=0,f,l,count=0;
	f=0;
	l=n-1;
	while(f<=l&&(a[f]<=item&&a[l]>=item))
	{
		count++;
		mid=f+(l-f)/(a[l]-a[f])*(item-a[f]);
		if(a[mid]==item)
		{
			cout<<"item found at pos :"<<mid+1<<endl;
			flag=1;
			break;
		}
		else if(a[mid]>item)
		l=mid-1;
		else
		f=mid+1;
	}
	if(flag==0)
	cout<<"item not found"<<endl;
	cout<<"no. of comparisions :"<<count<<endl;
}

void sort(int a[],int n)
{
	int j,min,i,temp;
	for(i=0;i<=n-2;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
	{
		if(a[j]<a[min])
			min=j;
	}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
	cout<<"sorted array is :-";
	for(j=0;j<n;j++)
	cout<<a[j]<<endl;
}
