#include<iostream>
#define size 7
using namespace std;

int a[size];
int n=0;

void key(int,int,int,int);
void display()
{
	int i;
	for(i=0;i<size;i++)
	cout<<"i="<<i<<" - "<<a[i]<<endl;
}

int main()
{
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
			key(i,j,l,value);
			cout<<"do u want to continue (y\n) :-"<<endl;
			cin>>ch;
		}
		
	}
	while(ch=='y'||ch=='Y');
	display();
		return 0;

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

