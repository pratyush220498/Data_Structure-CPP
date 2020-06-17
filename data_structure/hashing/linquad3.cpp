#include<iostream>
#define size 7
using namespace std;

int a[size];
int n=0;

void key(int,int,int,int,int,int);
void key(int,int,int,int);

void display()
{
	int i;
	for(i=0;i<size;i++)
	cout<<"i="<<i<<" - "<<a[i]<<endl;
}

void linear()
{
	int i,j,k,l,value;
	char ch;
	do
	{
		if(n==size)
		{
			cout<<"hash table overflow ."<<endl;
				display();
			exit(-1);
		}
		else
		{
			cout<<"enter the key :-"<<endl;
			cin>>i;
			cout<<"enter the value :-"<<endl;
			cin>>value;
			j=i%size;
			l=1;
			n++;
			cout<<"n="<<n;
			key(i,j,l,value);
			cout<<"do u want to continue (y\n) :-"<<endl;
			cin>>ch;
		}
		
	}
	while(ch=='y'||ch=='Y');
	
}

int main()
{
	int i,j,k,l,q,value,m;
	char ch;
	do
	{
		if(n>7/2)
		{
			cout<<"hash table does not support quadretic prob"<<endl;
			linear();
		}
		else
		{
			cout<<"enter the key :-"<<endl;
			cin>>i;
			cout<<"enter the value :-"<<endl;
			cin>>value;
			q=i;
			j=i%size;
			l=1;m=1;
			key(i,j,l,q,m,value);
			n++;
			cout<<"do u want to continue (y\n) :-"<<endl;
			cin>>ch;
		}
	}
	while(ch=='y'||ch=='Y');
	
	return 0;
}

void key(int i,int j,int l,int q,int m,int value)
{
	int k;
	if(a[j]==NULL)
	{
		a[j]=value;
		cout<<"pos="<<j<<endl;
		cout<<"prob :- "<<l<<endl;
	}
	else
	{
		k=m*m;
		j=(q+k)%size;
		m++;
		l=l+1;
		key(i,j,l,q,m,value);
	}
}
void key(int i,int j,int l,int value)
{
	if(a[j]==NULL)
	{
		a[j]=value;
		cout<<"pos="<<j<<endl;
		cout<<"prob :- "<<l<<endl;
	}
	else
	{
		l=l+1;
		j=(j+1)%size;
		key(i,j,l,value);
	}
}
