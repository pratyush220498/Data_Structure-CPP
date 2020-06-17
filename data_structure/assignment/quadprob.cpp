#include<iostream>
#include<math.h>
using namespace std;

int size=7;
int a[7];
int m=1;
int n=1;

void key(int,int,int,int,int);
void display()
{
	int i;
	for(i=1;i<=size;i++)
	cout<<"i="<<i<<" - "<<a[i]<<endl;
}

int main()
{
	int i,j,k,l,q;
	char ch;
	if(n<=7/2)
	{
		do
	{
		cout<<"enter the key :-"<<endl;
		cin>>i;
		q=i;
		j=i%size;
		l=1;m=1;
		key(i,j,l,q,m);
		cout<<"do u want to continue (y\n) :-"<<endl;
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	
	}
	else
	{
		cout<<"hash table overflow"<<endl;
		display();
	}
	return 0;
}

void key(int i,int j,int l,int q,int m)
{
	int k;
	if(a[j]==NULL)
	{
		a[j]=i;
		cout<<"pos="<<j<<endl;
		cout<<"prob :- "<<l<<endl;
		n++;
	}
	else
	{
		cout<<"m="<<m<<endl;
		k=m*m;
		cout<<"k="<<k<<endl;
		j=(q+k)%size;
		m++;
		l=l+1;
		key(i,j,l,q,m);
	}
}

