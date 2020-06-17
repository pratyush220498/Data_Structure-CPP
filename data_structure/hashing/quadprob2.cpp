#include<iostream>
#define size 7
using namespace std;

int a[size];
int m=1;
int n=1;

void key(int,int,int,int,int,int);
void display()
{
	int i;
	for(i=1;i<=size;i++)
	cout<<"i="<<i<<" - "<<a[i]<<endl;
}

int main()
{
	int i,j,k,l,q,value;
	char ch;
	do
	{
		if(n>7/2)
		{
			cout<<"hash table overflow ."<<endl;
			break;
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
		display();
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

