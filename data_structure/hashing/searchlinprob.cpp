#include<iostream>
#define size 7
using namespace std;
int a[size];
int n=0;
void keyser(int,int,int,int);
void keyins(int,int,int,int);
void insert();
void search()
{
	cout<<"searching"<<endl;
	int i,value,j,l;
			cout<<"enter the key :-"<<endl;
			cin>>i;
			cout<<"enter the value :-"<<endl;
			cin>>value;
			j=i%size;
			cout<<j<<endl;
			l=1;
			keyser(i,j,l,value);	
			
}
void keyser(int i,int j,int l,int value)
{
	
	int count=0,flag=0;
	if(a[j]==value)
	{
		cout<<"value found at pos :-"<<j;
		cout<<"prob :- "<<l<<endl;
		flag=1;
	}
	else
	{
		cout<<count++;
		l=l+1;
		j=(j+1)%size;
		keyser(i,j,l,value);
	
}
}


int main()
{
	insert();
	search();
	return 0;
}
void insert()
{
	cout<<"insertion"<<endl;
	int i,j,k,l,value;
	char ch;
	do
	{
		if(n==size)
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
			j=i%size;
			l=1;
			n++;
			cout<<"n="<<n;
			keyins(i,j,l,value);
			cout<<"do u want to insert (y\n) :-"<<endl;
			cin>>ch;
		}
		
	}
	while(ch=='y'||ch=='Y');
}
void keyins(int i,int j,int l,int value)
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
		keyins(i,j,l,value);
	}
}

