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
void delete1(struct node*,struct node*);
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
int search1(int item ,node *temp1,node *temp2)
{
	if(temp2==NULL)
	{
		cout<<"item not found .";
		return 0;
	}
	else if(temp2->data==item)
	{
		cout<<"parent :- "<<temp1->data<<endl;
		cout<<"item found :-"<<temp2->data<<endl;
		return 1;
	}
	else if(temp2->data<item)
			search1(item,temp2,temp2->right);
	else if(temp2->data>item)	
			search1(item,temp2,temp2->left);
}
int search(int item)
{
	temp1=NULL;
	temp2=root;
	if(item==root->data)
	{
		cout<<"item found :- "<<temp2<<endl;
		cout<<"parent found :- "<<temp1<<endl;
		return 1;
	}
	else if(item<root->data)
	{
			temp1=temp2;
			search1(item,temp1,temp2->left);
	}
	else if(item>root->data)
	{
		temp1=temp2;
		search1(item,temp1,temp2->right);	
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
		x=search(item);
		if(x==1)
		delete1(temp1,temp2);
		else
		cout<<"element does not exist . "<<endl;
	}
}
void delete1(node *temp1,node*temp2)
{
	node *child;
	node *loc,*loc1;
	cout<<"delete 1 "<<endl;
	if(temp2->left==NULL&&temp2->right==NULL)
	{
		cout<<"leaf node . "<<endl;
		if(temp1==NULL&&temp2==root)
		{
			temp1=temp2=NULL;
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
		if(temp2==root&&temp1==NULL)
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
		if(temp2==root&&temp1==NULL)
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
	char ch,ch1;
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
	do
	{
		int item;
		cout<<"enter data to search:- ";
		cin>>item;
		search(item);
		cout<<"do u want to search:- ";
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	do
	{
		deletion();
		traverse(root);
		cout<<"do u want to delete:- ";
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	
	return 0;
}
