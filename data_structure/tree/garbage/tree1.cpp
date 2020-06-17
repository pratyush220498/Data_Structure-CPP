#include<iostream>
using namespace std;
struct node
{
	node *left;
	int data;
	node *right;
};
node *newnode;
node *root;
node *temp;
int count=0;
void rightnode(struct node*);
void leftnode(struct node*);
void getnode()
{
	newnode=new node;
	cout<<"enter data :- ";
	cin>>newnode->data;
	newnode->left=NULL;
	newnode->right=NULL;
}
void traverse(node *temp)
{
		if(temp!=NULL)
		{
			traverse(temp->left);
			cout<<temp->data<<"\t";
			traverse(temp->right);
		}
}
void leftnode(node *temp)
{
	if(temp->left==NULL)
		{
			cout<<"left"<<endl;
			temp->left=newnode;
			count++;
		}
	else
	{
		temp=temp->left;
		if(temp->data>newnode->data)
		leftnode(temp);
		else
		rightnode(temp);
	}
}
void rightnode(node *temp)
{
	if(temp->right==NULL)
		{
			cout<<"right"<<endl;
			temp->right=newnode;
			count++;
		}
	else
	{
		temp=temp->right;
		if(temp->data<newnode->data)
		rightnode(temp);
		else
		leftnode(temp);
	}
}
void insert()
{
	getnode();
	if(count==0)
	{
		root=newnode;
			count++;
	}
	else
	{
		if(newnode->data<root->data)
		leftnode(root);
		else
		rightnode(root);	
	}
}
int main()
{
	char ch;
	cout<<"do u want to insert :- ";
	cin>>ch;
	while(ch=='y'||ch=='Y')
	{
		insert();
		traverse(root);
		cout<<endl;
		cout<<"do u want to insert :- ";
		cin>>ch;
	}
}
