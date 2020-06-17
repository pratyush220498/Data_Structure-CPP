#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *start;
node *temp;
node *end;
node *newnode;
int count=0;
void reverse();
void getnode()
{
	newnode=new node;
	cout<<"enter data :- ";
	cin>>newnode->data;
	newnode->next=NULL;
}
void traverse(node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<endl;
}
void insert()
{
	getnode();
	if(start==NULL)
	{
		start=newnode;
		end=newnode;
	}
	else
	{
		end->next=newnode;
		end=newnode;
	}
	count++;
	cout<<"count = "<<count<<endl;
	traverse(start);
}
void reverse(node *start)
{
	node *prev=NULL;
 	node *current=start;
 	node *next1=NULL;
	while(current!=NULL)
	{
		next1=current->next;
		current->next=prev;
		prev=current;
		current=next1;
	}
	start=prev;
	traverse(start);
}
int main()
{
	int i;
	char ch;
	cout<<"enter element in list 1 :- "<<endl;
	do
	{
		insert();
		cout<<"do u want to continue :- ";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	reverse(start);
	return 0;
}
