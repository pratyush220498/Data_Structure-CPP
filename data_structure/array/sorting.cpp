#include<iostream>
using namespace std;

void bubble(int[],int);
void insertion(int[],int);
void selection(int[],int);

int main()
{
	int i,j,k,n;
	char ch;
	cout<<"enter size of array :-"<<endl;
	cin>>n;
	int a[n],b[n],c[n];
	cout<<"enter elements in the array :-";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	b[i]=a[i];
	for(i=0;i<n;i++)
	c[i]=a[i];
	do
	{
		cout<<"ur choices are :- "<<endl;
		cout<<"1.BUBBLE"<<endl;
		cout<<"2.SELECTION"<<endl;
		cout<<"3.INSERTION"<<endl;
		cout<<"enter your choice :-"<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				bubble(a,n);
				break;
			case 2:
				selection(b,n);
				break;
			case 3:
				insertion(c,n);
				break;
			default:
				cout<<"u have entered wrong choice.";		
		}
		cout<<"do u want to continue :-";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	return 0;
}

void bubble(int a[],int n)
{
	cout<<"         BUBBLE        "<<endl;
	int count=0;
	int i,j,flag,temp;
	for(i=0;i<=n-2;i++)
	{
		flag=0;
		for(j=0;j<=(n-i)-2;j++)
		{
			count++;
			if(a[j]>a[j+1])
			{
				flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
			break;
	}
	cout<<"no.of cmp. :-"<<count<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
}


void selection(int b[],int n)
{
	cout<<"         SELECTION        "<<endl;
	for(int i=0;i<n;i++)
	cout<<b[i]<<"\t";
	cout<<endl;
	int l=0;
	int i,j,min,temp;
	for(i=0;i<=n-2;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			l++;
			if(b[min]>b[j])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			temp=b[i];
			b[i]=b[min];
			b[min]=temp;
		}		
	}
	cout<<"no.of cmp. :-"<<l<<endl;
	for(i=0;i<n;i++)
	cout<<b[i]<<"\t";
	cout<<endl;
}

void insertion(int c[],int n)
{
	cout<<"      INSERTION        "<<endl;
	for(int i=0;i<n;i++)
	cout<<c[i]<<"\t";
	cout<<endl;
	int l=0;
	int i,j,min,temp;
	for(i=1;i<=n-1;i++)
	{
		min=c[i];
		for(j=i-1;j>=0&&c[j]>min;j--)
			{
				l++;
				c[j+1]=c[j];	 
			}
		c[j+1]=min;	
	}
	cout<<"no.of cmp. :-"<<l<<endl;
	for(i=0;i<n;i++)
	cout<<c[i]<<"\t";
	cout<<endl;
}
