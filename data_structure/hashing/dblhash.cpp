#include<iostream>
#define size 11
using namespace std;

int a[11],n=0;
void display()
{
	int i;
	for(i=0;i<size;i++)
	cout<<"i="<<i<<"\t"<<a[i];
}
void dblhash(int,int,int,int,int);

int main()
{
	int i,j,prob,value,mul;
	char ch;
	do
	{
		if(n>size)
		{
			cout<<"hash table overflow"<<endl;
			exit(-1);
		}
		else
		{
			cout<<"enter the key and value :- "<<endl;
			cin>>i>>value;
			j=i%size;
			n++;
			prob=1;
			mul=1;
			dblhash(i,value,j,prob,mul);
			cout<<"do u want to continue :-"<<endl;
			cin>>ch;
		}
	}
	while(ch=='y'||ch=='Y');
	return 0;
}

void dblhash(int i,int value,int j,int prob,int mul)
{
	int k,l,m;
	if(a[j]==NULL)
	{
			a[j]=value;
			cout<<"j="<<j<<endl;
			cout<<"prob="<<prob<<endl;
	}
	else if(prob==1)
	{
		prob++;
		k=i%7;
		cout<<k<<endl;
		l=(k+j)%size;
		cout<<"l="<<l<<endl;
		dblhash(i,value,l,prob,mul);
	}
	else
	{
		m=(j+(mul*l)%size);
		prob++;
		mul++;
		dblhash(i,value,m,prob,mul);
	}
}
