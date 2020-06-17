#include<iostream>
using namespace std;

int a[20];

void key(int,int,int);
void display()
{
	int i;
	for(i=0;i<20;i++)
	cout<<"i="<<i<<" - "<<a[i]<<endl;
}

int main()
{
	int i,j,k,l;
	char ch;
	do
	{
		cout<<"enter the key :-"<<endl;
		cin>>i;
		j=i%19+1;
		cout<<j<<endl;
		l=1;
		key(i,j,l);
		cout<<"do u want to continue (y\n) :-"<<endl;
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	display();
	return 0;
}

void key(int i,int j,int l)
{
	if(a[j]==NULL)
	{
		cout<<"i="<<i<<endl;
		a[j]=i;
		cout<<"pos="<<j<<endl;
		cout<<"prob :- "<<l<<endl;
	}
	else
	{
		l=l+1;
		j=j+1%19;
		key(i,j,l);
	}
}

