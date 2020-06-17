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
node *parent;
node *loc2;
int count=0;
void rightnode(struct node*);
void leftnode(struct node*);
void delete1(struct node*,struct node *);
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
int search(int item,node *temp1,node *temp2)
{
	if(temp2==NULL)
	{
		cout<<"item not found ."<<endl;
		return 0;
	}
	else if(item==temp2->data)
	{
		loc2=temp2;
		parent=temp1;
		return 1;
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
void deletion()
{
	int x,item;
	cout<<"enter item :-";
	cin>>item;
	if(root==NULL)
	cout<<"no item to delete ."<<endl;
	else 
	{
		x=search(item,NULL,root);
		if(x==1)
		{
			cout<<temp1->data<<endl;
			cout<<temp2->data<<endl;
			delete1(parent,loc2);
		}
		else
		cout<<"element does not exist . "<<endl;
	}
}
void delete1(node *temp1,node*temp2)
{
	cout<<"delete 1"<<endl;
	cout<<"temp2->left"<<temp2->left->data<<endl;
	cout<<"temp2->right"<<temp2->right->data<<endl;
	node *child;
	node *loc,*loc1;
	if(temp2->left==NULL&&temp2->right==NULL)
	{
		cout<<"leaf node . "<<endl;
		if(temp1==NULL)
		{
			root=NULL;
		}
		else if(temp1->left==NULL&&temp1->right!=NULL)
 			{
			temp1->right=NULL;
		}
		else if(temp1->left!=NULL&&temp1->right==NULL)
		{
			temp1->left=NULL;
		}
	}
	else if(temp2->left!=NULL&&temp2->right==NULL)
	{
		cout<<"parent with one left child . "<<endl;
		child=temp2->left;
		if(temp1==NULL)
		{
			root=child;
		}
		else
		{
			temp1->left=child;
		}
	}
	else if(temp2->left==NULL&&temp2->right!=NULL)
	{
		cout<<"parent with one right child . "<<endl;
		child=temp2->right;
		if(temp1==NULL)
		{
			root=child;
		}
		else
		{
			temp1->right=child;
		}
	}
	else if(temp2->left!=NULL&&temp2->right!=NULL)
	{
		cout<<"parent with two child . "<<endl;
		if(temp2==root&&temp1==NULL)
		{
			loc1=temp2;
			loc=temp2->right;
			while(loc->left!=NULL)
			{
				loc1=loc;
				loc=loc->left;
			}
			loc->left=temp2->left;
			loc->right=temp2->right;
			loc1->left=NULL;
			root=loc;
		}
		else
		{
			loc1=temp2;
			loc=temp2->right;
			while(loc->left!=NULL)
			{
				loc1=loc;
				loc=loc->left;
			}
			loc->left=temp2->left;
			loc->right=temp2->right;
			loc1->left=NULL;
		}
	}
}
int main()
{
	int i,item;
	char ch,ch1;
	do
	{
		cout<<"ur choices are :- "<<endl;
		cout<<"1. insertion 2. searching 3. deletion"<<endl;
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
			case 3:
				 deletion();
			default:
				cout<<"u have entered wrong choice ."<<endl;	
		}
		cout<<"do u want to continue :-";
		cin>>ch;		
	}while(ch=='y'||ch=='Y');	
	return 0;
}
