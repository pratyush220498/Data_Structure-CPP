#include<iostream>
#include<stdlib.h>
using namespace std;
int * reverse(int *p,int size)
{
	int *temp=(int *)malloc(size*sizeof(int));
	int k=0;
	for(int i=size-1;i>=0;i--)
	{		
		*(temp+k)=*(p+i);
		k++;		
	}
	return temp;
}
int main()
{
	int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
		cin>>*(a+i);
	int *p=reverse(a,size);	
	for(int i=0;i<size;i++)
		cout<<*(p+i)<<" ";	
	return 0;
}
