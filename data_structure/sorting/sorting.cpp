#include<iostream>
using namespace std;

void bubble(int[],int);
void insertion(int[],int);
void selection(int[],int);
void quick(int[],int);
void qs(int [],int, int,int);
int partition(int[],int,int,int);
void swap(int[],int[]);
void merge(int[],int);
void ms(int[],int,int,int);
void m(int[],int,int,int,int);
void heap(int[],int);
void heapsort(int[],int);
void buildheap(int[],int);
void heapify(int[],int);
void display(int j[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<j[i]<<"\t";
}

int main()
{
	int i,j,k,n;
	char ch;
	cout<<"enter size of array :-"<<endl;
	cin>>n;
	int a[n],b[n],c[n],d[n],e[n],f[n];
	cout<<"enter elements in the array :-";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
		c[i]=a[i];
		d[i]=a[i];
		e[i]=a[i];
		f[i]=a[i];
	}
	do
	{
		cout<<"ur choices are :- "<<endl;
		cout<<"1.BUBBLE"<<endl;
		cout<<"2.SELECTION"<<endl;
		cout<<"3.INSERTION"<<endl;
		cout<<"4.QUICK"<<endl;
		cout<<"5.MERGE"<<endl;
		cout<<"6.HEAP"<<endl;
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
			case 4:
				quick(d,n);
				break;
			case 5:
				merge(e,n);
				break;	
			case 6:
				heap(f,n);
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

void quick(int d[],int n)
{
	cout<<"         QUICK        "<<endl;
	int f=0,l=n-1;
	qs(d,f,l,n);
	display(d,n);
}
void qs(int d[],int f,int l,int n)
{
	int pos;
	if(f<l)
	{
		pos=partition(d,f,l,n);
		qs(d,f,pos-1,n);
		qs(d,pos+1,l,n);
	}
}
int partition(int d[],int f,int l,int n)
{
	int j=f,i=j-1;
	int pivot=d[l];
	while(j<=l-1)
	{
		if(d[j]<pivot)
		{
			swap(d[j],d[++i]);
		}
		j++;
	}
	swap(d[++i],d[l]);
	return i;
}
void merge(int e[],int n)
{
	cout<<"         MERGE        "<<endl;
	int f=0,l=n-1;
	ms(e,f,l,n);
	display(e,n);
}
void ms(int e[],int f,int l,int i)
{
	int mid;
	if(f<l)
	{
		mid=(f+l)/2;
		ms(e,f,mid,i);
		ms(e,mid+1,l,i);
		m(e,f,mid,l,i);
	}
}
void m(int e[],int f,int mid,int l,int i)
{
	int n1,n2,j;
	n1=mid-f+1;
	n2=l-mid;
	int left[n1+1],right[n2+1];
	int k=f;
	for(int m=0;m<n1;m++)
	{
		left[m]=e[k];
		k++;
	}
	left[n1]=1000;
	k=mid+1;
	for(int j=0;j<n2;j++)
	{
		right[j]=e[k];
		k++;
	}
	right[n2]=1000;
	i=0,j=0;
	for(k=f;k<=l;k++)
	{
		if(left[i]<right[j])
		{
			e[k]=left[i];
			i++;
		}
		else
		{
			e[k]=right[j];
			j++;
		}
	}
}
void heap(int f[],int k)
{
	heapsort(f,k);
	display(f,k);
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
void swap(int a[],int b[])
{
	int temp,i,j;
	temp=a[i];
	a[i]=b[j];
	b[j]=temp;
}

