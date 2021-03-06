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
	
			cout<<"your choices are :-"<<endl;
			cout<<"1.linear search "<<endl;
			cout<<"2.binary search "<<endl;
			cout<<"3.interpolition search "<<endl;
			cout<<"enter your choice :-"<<endl;
			cin>>k;
			switch(k)
			{
				case 1:
					linear(a,n,item);
					break;
				case 2:
					binary(a,n,item);
					break;
				case 3:
					interpolition(a,n,item);
					break;
				default:
					cout<<"you have entered wrong choice :"<<endl;
			}	
		cout<<"do you want to continue (y\n) :-"<<endl;
		cin>>ch;
	}	
	while(ch=='y'||ch=='Y');
	return 0;
}

void linear(int a[],int n,int item)
{
	int i,j,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			cout<<"item found at pos :"<<i+1<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"item not found"<<endl;
}

void binary(int a[],int n,int item)
{
	int i,mid,j,flag=0,f,l;
	f=0;
	l=n-1;
	while(f<=l)
	{
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
}

void interpolition(int a[],int n,int item)
{
	int i,mid,j,flag=0,f,l;
	f=0;
	l=n-1;
	while(f<=l&&(a[f]<=item&&a[l]>=item))
	{
		mid=f+(l-f)*((item-a[f])/(a[l]-a[f]));
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


