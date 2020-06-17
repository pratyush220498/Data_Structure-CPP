#include<iostream>
using namespace std;
void countsort(int[],int[],int[],int,int);
int main()
{
	int i,flag,temp,size,j,k,range;
	cout<<"enter size ="<<endl;
	cin>>size;
	int ip[size];
	cout<<"enter elements :-"<<endl;
	for(i=0;i<=size-1;i++)
	cin>>ip[i];
	int max=0;
	for(i=1;i<=size-1;i++)
	{
		if(ip[i]>ip[max])
		max=i;
	}
	range=ip[max];
	cout<<"range="<<range<<endl;
	int op[size];
	for(j=0;j<=size-1;j++)
	op[j]=0;
	int count[range+1];
	for(k=0;k<=range;k++)
	count[k]=0;
	countsort(ip,op,count,range,size);
	return 0;
}
void countsort(int ip[],int op[],int count[],int range,int size)
{
	int i,j,k,temp,flag;
	for(i=0;i<=size-1;i++)
	{
		temp=ip[i];
		count[temp]=count[temp]+1;
	}
	for(j=1;j<=range;j++)
	{
		count[j]=count[j]+count[j-1];
	}
	for(j=size-1;j>=0;j--)
	{
		temp=ip[j];
		count[temp]=count[temp]-1;
		flag=count[temp];
		op[flag]=temp;
	}
	cout<<"sorted array = "<<endl;
	for(j=0;j<=size-1;j++)
	cout<<j+1<<"\t"<<op[j]<<endl;
	
}
