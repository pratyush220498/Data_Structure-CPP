#include<iostream>
using namespace std;
struct node
{
	int priority;
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
	int i,j,k;
	char ch;
	cout<<"    INSERTION and DELETION and SEARCHING  "<<endl;
		do
		{
			cout<<"ur choices are :- ";
			cout<<"1.INSERT  2.DELETE  3.SEARCHING"<<endl;
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
				insertatfirst();		
				cout<<"do u want to insert more :-";		cin>>ch;
		}
	while(ch=='y'||ch=='Y');
}
void getnode()
{
	newnode=new node;
	int value;
	cout<<"enter priority :-";
	cin>>newnode->priority;
	cout<<"enter data :-";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void insertatfirst()
{
	int i;
	if(count==0)
	{
		iempty();
	}
	else
	{
		getnode();
		++count;
		temp=start;
		while(temp->priority >= newnode->priority)	temp=temp->nextnode;	
		newnode->nextnode=temp->nextnode;
		temp->nextnode=newnode;
	}
	traverse();
}
void iempty()
{
	getnode();
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
		do
	{
	
		if(count==0)	
			{
				cout<<"underflow condition . pls insert element first"<<endl;
				break;
			}
		else
		{
			cout<<"ur choices are delete at :- ";
			cout<<"1.first  2.last  3.position"<<endl;
			cout<<"enter ur choice :- ";
			cin>>i;
			switch(i)
			{	
				case 1:
				deleteatfirst();
				break;
				case 2:
				deleteatlast();
				break;
				case 3:
				deleteatpos();
				break;
				default:
				cout<<"you have entered wrong choice"<<endl;			
			}
				cout<<"do u want to delete more :-";		cin>>ch;
		}
	}
	while(ch=='y'||ch=='Y');
}
void deleteatfirst()
{
	if(count==0)
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
void deleteatlast()
{
	int i;
	if(count==0)
	{
		dempty();
	}
	else
	{
		temp=start;
		for(i=1;i<=count-2;i++)
		temp=temp->nextnode;
		temp->nextnode=NULL;
		--count;
	}
	traverse();
}
void deleteatpos()
{
	int pos,i;
	cout<<"enter position :-"<<endl;
	cin>>pos;
	if(pos==1)	deleteatfirst();
	else if(pos==count)	deleteatlast();
	else if(pos>1&&pos<count)
	{
		--count;
		temp=start;
		for(i=1;i<=pos-2;i++)	temp=temp->nextnode;
		temp->nextnode=temp->nextnode->nextnode;
		traverse();
	}
	else
	cout<<"invalid position"<<endl;
}
void dempty()
{
	start=NULL;
	end=NULL;
	--count;
}
void searching()
{
	int item,tag=0;
	cout<<"enter item :- ";
	cin>>item;
	int flag=0;
	if(count==0)
	cout<<"no element to search . "<<endl;
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			flag++;
			if(temp->data==item)
			{
				cout<<"item found at position :- "<<flag<<endl;
				tag=1;
				break;
			}
			else
			{
				temp=temp->nextnode;
			}
		}
		if(tag==0)
		cout<<"element not found"<<endl;
	}
}
