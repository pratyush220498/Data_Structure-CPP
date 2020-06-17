#include<iostream>
#define size 7
using namespace std;

int a[size];
int n=0;

void insert();
void remove();
void search();
void keyins(int,int,int,int);
void keydel(int,int,int,int);
void keyser(int,int,int,int);

void traverse()
{
	int i;
	for(i=0;i<size;i++)
	cout<<"i="<<i<<" - "<<a[i]<<endl;
}

int main()
{
	int i,j,k;
	char ch;
	do
	{
		cout<<"ur choices are :-"<<endl;
		cout<<"1.insertion"<<endl;
		cout<<"2.deletion"<<endl;
		cout<<"3.searching"<<endl;
		cout<<"4.traversing"<<endl;
		cout<<"enter ur choice :- "<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				insert();
				break;
			case 2:
				remove();
				break;
			case 3:
				search();
				break;
			case 4:
				traverse();
				break;
			default:
				cout<<"u have entered wrong choice . "<<endl;			
		}
		cout<<"do u want to continue(y\n) :- ";
		cin>>ch;
	}
	while(ch=='Y'||ch=='y');
	return 0;
}

void insert()
{
	int i,j,k,l,value;
	char ch;
	do
	{
		if(n==size)
		{
			cout<<"hash table overflow ."<<endl;
			main();
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

void remove()
{
	int i,j,k,l,value;
	char ch;
	do
	{
		if(n==0)
		{
			cout<<"hash table underflow ."<<endl;
			main();
		}
		else
		{
			cout<<"enter the key :-"<<endl;
			cin>>i;
			cout<<"enter the value :-"<<endl;
			cin>>value;
			j=i%size;
			l=1;
			keydel(i,j,l,value);
			cout<<"do u want to delete (y\n) :-"<<endl;
			cin>>ch;
		}
	}
	while(ch=='y'||ch=='Y');
}
void keydel(int i,int j,int l,int value)
{
	int m,k;
	if(a[j]==value)
	{
		m=value;
		a[j]=0;
		cout<<"prob :- "<<l<<endl;
		cout<<"item deleted is = "<<m<<endl;
		cout<<"key deleted is = "<<i<<endl;
	}
	else
	{
		l=l+1;
		j=(j+1)%size;
		keydel(i,j,l,value);
	}
}

void search()
{
			int i,value,j,l;
			cout<<"enter the key :-"<<endl;
			cin>>i;
			cout<<"enter the value :-"<<endl;
			cin>>value;
			j=i%size;
			l=1;
			if(a[j]!=NULL)
			keyser(i,j,l,value);
			else
			cout<<"value does not exist . ";
}
void keyser(int i,int j,int l,int value)
{
	if(a[j]==value)
	{
		cout<<"value found at pos :-"<<j;
		cout<<"prob :- "<<l<<endl;
		main();
	}
	else
	{
		l=l+1;
		j=(j+1)%size;
		keyser(i,j,l,value);
	}
}

