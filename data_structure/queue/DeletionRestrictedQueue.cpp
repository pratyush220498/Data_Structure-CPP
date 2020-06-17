#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
};
node *temp;
node *start;
node *end;
node *newnode;
int count=0;
void insertion();
void getnode();
void iempty();
void insertatfirst();
void insertatlast();
void insertatpos();
void deletion();
void dempty();
void deleteatfirst();
void deleteatlast();
void deleteatpos();
void searching();
void traverse();
int main()
{
	cout<<"deletion restricted dq."<<endl;
	int i,j,k;
	char ch;
		do
		{
			cout<<"ur choices are :- ";
			cout<<"1.INSERT  2.DELETE "<<endl;
			cout<<"enter ur choice :- ";
			cin>>i;
			switch(i)
			{	
				case 1:
				insertion();
				break;
				case 2:
				deletion();
				break;
				default:
				cout<<"you have entered wrong choice"<<endl;			
			}
				cout<<"do u want to continue :-";		cin>>ch;
		}
	while(ch=='y'||ch=='Y');
	return 0;
}
void insertion()
{
	int i,j,k;
	char ch;
	cout<<"    INSERTION   "<<endl;
		do
		{
			cout<<"ur choices are insert at :- ";
			cout<<"1.first  2.last "<<endl;
			cout<<"enter ur choice :- ";
			cin>>i;
			switch(i)
			{	
				case 1:
				insertatfirst();
				break;
				case 2:
				insertatlast();
				break;
				default:
				cout<<"you have entered wrong choice"<<endl;			
			}
				cout<<"do u want to insert more :-";		cin>>ch;
		}
	while(ch=='y'||ch=='Y');
}
void getnode()
{
	newnode=new node;
	int value;
	cout<<"enter data :-";
	cin>>value;
	newnode->data=value;
	newnode->nextnode=NULL;
}
void insertatfirst()
{
	getnode();
	if(count==0)
	{
		iempty();
	}
	else
	{
		++count;
		newnode->nextnode=start;
		start=newnode;
	}
	traverse();
}
void insertatlast()
{
	getnode();
	if(count==0)
	{
		iempty();
	}
	else
	{
		++count;
		end->nextnode=newnode;
		end=newnode;
	}
	traverse();
}
void iempty()
{
	start=newnode;
	end=newnode;
	++count;
}
void traverse()
{
	temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->nextnode;
		}
	cout<<endl;
}
void deletion()
{
	int i,j,k;
	char ch;
	cout<<"    DELETION   "<<endl;
	if(count==0)	
	{
		cout<<"underflow condition . pls insert element first"<<endl;
	}
	else
	{
		deleteatfirst();
	}
}
void deleteatfirst()
{
	if(start==NULL&&end==NULL)
		cout<<"underflow"<<endl;
	else if(start==end)
	{
		dempty();
	}
	else
	{
		temp=start;
		start=start->nextnode;
		--count;
	}
	traverse();
}
void dempty()
{
	start=NULL;
	end=NULL;
	--count;
}

