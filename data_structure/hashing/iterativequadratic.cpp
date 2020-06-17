#include<iostream>
using namespace std;

#define size 7
int a[size];
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
	int key,prob,j,value,add;
	char ch;
	do
	{
		prob=0;
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
		if(n<size/2)
		{
			for(j=0;j<size/2;j++)
			{
			add=(key+j*j)%size;
			prob++;
			if(a[add]==NULL)
				{
				a[add]=value;
				n++;
				cout<<"pos="<<add+1<<endl;
				cout<<"prob="<<prob<<endl;
				display();
				break;
				}
			}
		}
		else
		{
			for(j=1;j<=size;j++)
			{
			add=(key+j)%size;
			prob++;
			if(a[add]==NULL)
				{
					a[add]=value;
					n++;
					cout<<"pos="<<add+1<<endl;
					cout<<"prob="<<prob<<endl;
					display();
					break;
				}
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
	int key,j,flag,value,prob,add;
	char ch;
	do
	{
		if(n==0)
		{
			cout<<"no element to search ."<<endl;
			break;
		}
		else
		{
			prob=0;
			flag=0;
			cout<<"enter the key :-";
			cin>>key;
			cout<<"enter the value :-";
			cin>>value;
			for(j=0;j<size/2;j++)
			{
				add=(key+j*j)%size;
				prob++;
				if(a[add]==NULL||a[add]!=value)
				{
					flag=0;
				}
				else
				{
					flag=1;
					cout<<"item found at pos ="<<add+1<<endl;
					cout<<"no.of clashes = "<<prob<<endl;
					break;	
				}
			}
			if(j>=size/2)
			{
				int k;
				add=key%size;
				for(k=0;k<size;k++)
				{
					add=(key+k)%size;
					prob++;
					if(a[add]==NULL||a[add]!=value)
					{
						flag=0;
					}
					else
					{
						flag=1;
						cout<<"item found at pos ="<<add+1<<endl;
						cout<<"no.of clashes = "<<prob<<endl;
						break;	
					}
				}
				}
		}
		if(flag==0)
		cout<<"item does not exist. "<<endl;
		cout<<"do u want to search more . ('y'\'n') :-"<<endl;
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
}

void deletion()
{
	int key,flag,j,value,add,prob;
	char ch;
	do
	{
		prob=0;
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
		for(j=0;j<=size/2;j++)
			{
				add=(key+j*j)%size;
				prob++;
				if(a[add]==NULL||a[add]!=value)
				{
					flag=0;
				}
				else
				{
					flag=1;
					a[add]=0;
					cout<<"item deleted is ="<<a[add]<<endl;
					cout<<"no.of clashes = "<<prob<<endl;
					display();
					break;	
				}
			}
			if(j==6)
			{
				add=key%size;
				for(j=0;j<size;j++)
				{
					add=(key+j)%size;
					prob++;
					if(a[add]==NULL||a[add]!=value)
					{
						flag=0;
					}
					else
					{
						a[add]=0;
						flag=1;
						cout<<"item deleted is ="<<a[add]<<endl;
						cout<<"no.of clashes = "<<prob<<endl;
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
