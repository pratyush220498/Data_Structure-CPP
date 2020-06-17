#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
node *start=NULL;
node *end=NULL;
node *newnode;
int count=0;
void getnode()
{
	newnode=new node();
	cout<<"enter data"<<endl;
	cin>>newnode->data;
	newnode->next=NULL;
}
void traverse()
{
	node *temp=start;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void iempty()
{
	start=newnode;
	end=newnode;
}
void insert()
{
	getnode();
	if(start==NULL&&end==NULL)
	{
		iempty();
	}
	else
	{
		end->next=newnode;
		end=newnode;
	}
	traverse();
}
void reverse()
{
	node *p,*q,*r;
	p=start;
	q=p->next;
	r=q->next;
	q->next=p;
	p->next=NULL;
	while(r!=NULL)
	{
		p=q;
		q=r;
		r=r->next;
		q->next=p;	
	}
	start=q;
	traverse();
}
int main()
{
	char ch='y';
	do
	{
		insert();
		cout<<"do u want to continue"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	reverse();
	return 0;
}
