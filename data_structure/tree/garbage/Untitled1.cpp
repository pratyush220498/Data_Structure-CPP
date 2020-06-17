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
		cout<<"item found ."<<endl;
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
	node *child;
	node *loc,*loc1;
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
			cout<<"delete 1"<<endl;
			if(loc2->left==NULL&&loc2->right==NULL)
			{
				cout<<"leaf node . "<<endl;
				if(parent==NULL)
				{
					root=NULL;
				}		
				else if(parent->right==loc2)
				{
					parent->right=NULL;
				}
				else if(parent->left==loc2)
				{
					parent->left=NULL;
				}
			}
			else if(loc2->left!=NULL&&loc2->right==NULL)
			{
				cout<<"parent with one left child . "<<endl;
				child=loc2->left;
				if(parent==NULL)
				{
					root=child;
				}
				else
				{
					if(parent->left==loc2)
					parent->left=child;
					else
					parent->right=child;
				}
			}
			else if(loc2->left==NULL&&loc2->right!=NULL)
			{
				cout<<"parent with one right child . "<<endl;
				child=loc2->right;
				if(parent==NULL)
				{
					root=child;
				}
				else
				{
					if(parent->left==loc2)
					parent->left=child;
					else
					parent->right=child;
				}
			}	
			else if(loc2->left!=NULL&&loc2->right!=NULL)
			{
				cout<<"parent with two child . "<<endl;
				if(parent==NULL)
				{
					cout<<"root deletion"<<endl;
					loc1=loc2;
					loc=loc2->right;
					while(loc->left!=NULL)
					{
						loc1=loc;
						loc=loc->left;
					}
					loc->left=loc2->left;
					if(loc2->right!=loc)
					loc->right=loc2->right;
					loc1->left=NULL;
					root=loc;
				}
				else
				{
					loc1=loc2;
					loc=loc2->right;
					while(loc->left!=NULL)
					{
						loc1=loc;
						loc=loc->left;
					}
					loc->left=loc2->left;
					if(loc2->right!=loc)
					loc->right=loc2->right;
					loc1->left=NULL;
					if(parent->left==loc2)
					parent->left=loc;
					else
					parent->right=loc;
				}
			}
		}
		else
		cout<<"element does not exist . "<<endl;
	}
}
int main()
{
	int i,item;
	char ch,ch1;
	do
	{
		cout<<"ur choices are :- "<<endl;
		cout<<"1. insertion 2. searching 3. deletion 4. traverse"<<endl;
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
				 break;
			case 4:
				cout<<"root"<<root->data<<endl;
				traverse(root);
				break;	 
			default:
				cout<<"u have entered wrong choice ."<<endl;	
		}
		cout<<"do u want to continue :-";
		cin>>ch;		
	}while(ch=='y'||ch=='Y');	
	return 0;
}
