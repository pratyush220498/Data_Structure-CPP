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
node *temp1;
node *temp2;
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
void search(int item,node *temp1,node *temp2)
{
	 if(temp2==NULL)
	{
		cout<<"item not found ."<<endl;
	}
	else if(item==temp2->data)
	{
		cout<<"item found :- "<<temp2->data<<endl;
		cout<<"parent found :- "<<temp1->data<<endl;
	}
	else if(item<temp2->data)
	{
			temp1=temp2;
			search(item,temp1,temp2->left);
	}
	else if(item>temp2->data)
	{
		temp1=temp2;
		search(item,temp1,temp2->right);	
	}
}

int main()
{
	int i,item;
	char ch,ch1;
	do
	{
		cout<<"ur choices are :- "<<endl;
		cout<<"1. insertion 2. searching "<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				insert();
				traverse(root);
				cout<<endl;
				break;
			case 2:
				cout<<"enter item :- ";
				cin>>item;
				search(item,root,root);
				break;
			default:
				cout<<"u have entered wrong choice ."<<endl;	
		}
		cout<<"do u want to continue :-";
		cin>>ch;		
	}while(ch=='y'||ch=='Y');	
	return 0;
}
