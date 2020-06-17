#include<iostream>
using namespace std;

#define size 11
int a[size]={0,0,0,0,0,0,0,0,0,0,0};
int n=0;

void insertion();
void deletion();
void searching();
void display();

int main()
{
	int i,j,k;
	char ch;
	do
	{
		cout<<"ur choices are :-";
		cout<<"1.INSERTION"<<"\t"<<"2.DELETION"<<"\t"<<"3.SEARCHING"<<"\t"<<"4.TRAVERSING"<<endl;
		cout<<"enter your choice :-";
		cin>>i;
		switch(i)
		{
			case 1:
				insertion();
				break;
			case 2:
				deletion();
				break;	
			case 3:
				searching();
				break;
			case 4:
				display();
				break;
			default:
				cout<<"u have entered wrong choice . "<<endl;		
		}
		cout<<"do u want to continue('y'\'n') :-";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
}

void insertion()
{
	int key,prob,j,value,add,pos,pos1;
	char ch;
	do
	{
		prob=1;
		if(n==size)
		{
			cout<<"hash table overflow .";
			break;
		}
		else
		{
			cout<<"enter the key :-";
			cin>>key;
			cout<<"enter the value :-";
			cin>>value;
			add=key%size;
			if(a[add]==0)
			{
				a[add]=value;
				cout<<"pos="<<add+1<<endl;
				cout<<"prob="<<prob<<endl;
				n++;
				display();
			}
			else
			{
				pos=key%7;
				pos1=(add+pos)%size;
				prob++;
				if(a[pos1]==0)
				{
					a[pos1]=value;
					n++;
					cout<<"pos="<<pos1+1<<endl;
					cout<<"prob="<<prob<<endl;
					display();
				}
			}
		}
		cout<<"do u want to insert more . ('y'\'n') :-";
		cin>>ch;
	}
	while(ch=='y'||ch=='y');
}

void searching()
{
	int key,j,flag,value,pos,pos1,prob,add;
	char ch;
	do
	{
		prob=1;
		flag=0;
		cout<<"enter the key :-";
		cin>>key;
		cout<<"enter the value :-";
		cin>>value;
		add=key%size;
		if(a[add]==value)
		{
			flag=1;
			cout<<"item found at pos ="<<add+1<<endl;
			cout<<"no. of clashes = "<<prob<<endl;	
		}
		else
		{
			for(j=1;j<=size;j++)
			{
				pos=key%5;
				pos1=(add+pos)%size;
				prob++;
				if(a[pos1]==value)
				{
					flag=1;
					cout<<"item found at pos ="<<add+1<<endl;
					cout<<"no.of clashes = "<<prob<<endl;
					break;	
				}
			}
		}
		if(flag==0)
		cout<<"item does not exist. "<<endl;
	cout<<"do u want to search more . ('y'\'n') :-";
	cin>>ch;
	}
	while(ch=='y'||ch=='Y');
}

void deletion()
{
	int key,flag,j,value,add,pos,pos1,prob;
	char ch;
	do
	{
		prob=1;
		flag=0;
		if(n==0)
		{
			cout<<"hash table underflow"<<endl;
			break;
		}
	else
	{	
	cout<<"enter the key :-";
	cin>>key;
	cout<<"enter the value :-";
	cin>>value;
	add=key%size;
	if(a[add]==value)
	{
		cout<<"item deleted is ="<<a[add]<<endl;
		cout<<"item deleted at pos ="<<add+1<<endl;
		cout<<"no. of clashes = "<<prob<<endl;
			a[add]=0;
			flag=1;
			n--;
			display();
	}
	else
	{
		for(j=1;j<=size;j++)
		{
			pos=key%5;
			pos1=(add+pos)%size;
			prob++;
			if(a[pos1]==value)
			{
				cout<<"item deleted is ="<<a[add]<<endl;
				cout<<"item deleted at pos ="<<add+1<<endl;
				cout<<"no. of clashes = "<<prob<<endl;
				flag=1;
				a[pos1]=0;
				n--;
				display();
				break;
			}
		}
	}
	}
	if(flag==0)
	cout<<"value does not exist . ";
	cout<<"do u want to delete more ('y'\'n'):-";
	cin>>ch;
	}
	while(ch=='y'||ch=='Y');
}

void display()
{
	int i,j;
	for(i=0;i<size;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
}
