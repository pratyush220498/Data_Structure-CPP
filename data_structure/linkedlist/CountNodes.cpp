#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *start;
node *start1;
node *temp;
node *end;
node *end1;
node *newnode;
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
	traverse(start);
}
void insert1()
{
	getnode();
	if(start1==NULL)
	{
		start1=newnode;
		end1=newnode;
	}
	else
	{
		end1->next=newnode;
		end1=newnode;
	}
	traverse(start1);
}
int main()
{
	int i;
	char ch;
	cout<<"enter no. of element in list 1 :-"<<endl;
	cin>>i;
	for(int j=1;j<=i;j++)
	{
		insert();
	}
	cout<<"enter no. of element in list 2 :-"<<endl;
	cin>>i;
	for(int j=1;j<=i;j++)
	{
		insert1();
	}
	end->next=start1;
	traverse(start);
	return 0;
}
