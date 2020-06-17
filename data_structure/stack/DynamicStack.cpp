#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *top=NULL;
node *bottom=NULL;
node *temp;
node *newnode;

int count=0;
void push();
void pop();
void search();

void traverse()
{
	temp=bottom;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<endl;
}

void getnode()
{
	newnode=new node;
	cout<<"enter data :- ";
	cin>>newnode->data;
	newnode->next=NULL;
}
int main()
{
	int i,j,k;
	char ch;
	do
	{
		
	cout<<"ur options are :-"<<endl;
	cout<<" 1. insert 2. delete 3. search 4. traverse"<<endl;
	cin>>i;
	switch(i)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				search();
				break;
			case 4:
				traverse();
				break;
			default:
				cout<<"u have entered wrong choice."<<endl;				
		}
		cout<<"do u want to continue :-"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}

void push()
{
	getnode();
	count++;
	if(top==NULL)
	{
		top=newnode;
		bottom=newnode;
	}
	else
	{
		top->next=newnode;
		top=newnode;
	}
	traverse();
}

void pop()
{
	if(bottom==NULL)	cout<<"no item to delete"<<endl;
	else if(top==bottom)
	{
		top=NULL;
		bottom=NULL;
		count--;
	}
	else
	{
		temp=bottom;
		while(temp->next!=top)
		temp=temp->next;
		temp->next=NULL;
		top=temp;
		count--;
	}
	traverse();
}

void search()
{
	int item,tag=0;
	cout<<"enter item :- ";
	cin>>item;
	int flag=0;
	if(count==0)
	cout<<"no element to search . "<<endl;
	else
	{
		temp=bottom;
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
				temp=temp->next;
			}
		}
		if(tag==0)
		cout<<"element not found"<<endl;
	}
}
