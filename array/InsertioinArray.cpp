#include<iostream>
using namespace std;
int main()
{
	int i,size,j,k,pos,value;
	cout<<"enter the no. of elements :-";
	cin>>size;
	int a[size];
	cout<<"enter elemnts in array :-"<<endl;
	for(j=0;j<size;j++)
	cin>>a[j];
	cout<<"entered array is :-";
	for(j=0;j<size;j++)
	cout<<a[j]<<"\t";
	cout<<endl;
	cout<<"enter the value u want to insert :-";
	cin>>value;
	cout<<"enter the position :-";
	cin>>pos;
	if(pos==1)
	{
		for(i=size-1;i>=0;i--)
			a[i+1]=a[i];
		a[0]=value;
		size++;	
	}
	else if(pos==size)
	{
		a[size]=value;
		size++;
	}
	else
	{
		for(int i=size-1;i>=pos-1;i--)
			a[i+1]=a[i];
			a[pos-1]=value;
			size++;
	}
	for(int i=0;i<size;i++)
		cout<<a[i]<<"\t";
	return 0;
}
