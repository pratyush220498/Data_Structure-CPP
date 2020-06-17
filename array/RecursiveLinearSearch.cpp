#include<iostream>
using namespace std;
int lsearch(int[],int,int,int);
int main()
{
	int size;
	cout<<"enter size :- ";
	cin>>size;
	int a[size];
	cout<<"Ener elements :- "<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
		int item;
	cout<<"enter item to search"<<endl;
	cin>>item;
	int n=lsearch(a,size,item,0);
	cout<<n;
	return 0;
}
int lsearch(int a[],int size,int item,int i)
{
	if(a[i]==item)
		return i;
	else if(i>=size)
		return -1;
	else
		return lsearch(a,size,item,++i);		
	
}
