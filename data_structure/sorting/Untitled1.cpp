#include<iostream>
using namespace std;
void countsort(int[],int[],int[],int,int);
int main()
{
	int i,j,k,size,range,count[10],max=0;
	cout<<"enter size :-"<<endl;
	cin>>size;
	int ip[size];
	cout<<"enter elements :-"<<endl;
	for(i=0;i<=size-1;i++)
	{
		cin>>ip[i];
		if(ip[i]>max)
		max=ip[i];
	}
	cout<<"range="<<max;
	int op[size];
	for(i=0;i<=size-1;i++)
	op[i]=0;
	int digit=1;
	while(max/digit>0)
	{
		countsort(ip,op,count,digit,size);
		digit*=10;
	}
	return 0;
}
void countsort(int ip[],int op[],int count[],int digit,int size)
{
	int i,j,k,temp,flag;
	for(i=0;i<=9;i++)	count[i]=0;
	for(i=0;i<=size-1;i++)		count[(ip[i]/digit)%10]++;
	for(j=1;j<=10;j++)			count[j]+=count[j-1];
	for(j=size-1;j>=0;j--)	
	op[--count[(ip[j]/digit)%10]]=ip[j];
	for(i=0;i<size;i++)	ip[i]=op[i];
	cout<<"sorted array = "<<endl;
	for(j=0;j<=size-1;j++)
	cout<<j+1<<"\t"<<op[j]<<endl;
	
}
