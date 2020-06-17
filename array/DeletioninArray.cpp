#include<iostream>
using namespace std;
int main()
{
	int i,size,j,k,a[20],pos,value;
	cout<<"enter the no. of elements :-";
	cin>>size;
	cout<<"enter elemnts in array :-";
	for(i=0;i<size;i++)
	cin>>a[i];
	cout<<"enter posiion :- ";
	cin>>pos;
	if(pos==1)
	{
		for(i=0;i<size-1;i++)
		a[i]=a[i+1];
		size--;
	}
	else if(pos==size)
	{
		size--;
	}
	else
	{
		for(i=pos-1;i<size-1;i++)
		a[i]=a[i+1];
		size--;
	}
	cout<<"Array"<<endl;
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	return 0;
}
