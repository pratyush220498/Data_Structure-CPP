#include<iostream>
using namespace std;
void insertleft();
void insertright();
struct node
{
	int info;
	node *left;
	node *right;
};
node *root=NULL,*tem,*newnode;
void get()
{
	newnode=new node;
	cout<<"Enter data\t";
	cin>>newnode->info;
	newnode->left=NULL;
	newnode->right=NULL;
}
void rootnode()
{
	get();
	root=newnode;
}
void insertright()
{
	if(tem->right==NULL)
	{
		tem->right=newnode;
	}
	else
	{
		tem=tem->right;
		if(newnode->info<tem->info)
		insertleft();
		else
		insertright();
	}	                     
}
void insertleft()
{
	if(tem->left==NULL)
	{
		tem->left=newnode;
	}
	else
	{
		tem=tem->left;
		if(newnode->info<tem->info)
		insertleft();
		else
		insertright();
	}
}
void inorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty\n";
        return;
    }
    if (ptr != NULL)
    {
        inorder(ptr->left);
        cout<<ptr->info<<"  ";
        inorder(ptr->right);
    }
}
int main()
{
	char choice;
	rootnode();
	cout<<"\nEnter y to continue\t";
	cin>>choice;
	while(choice=='y')
	{
		get();
		tem=root;
		if(newnode->info<root->info)
		insertleft();
		else
		insertright();
		cout<<"\nEnter y to continue\t";
		cin>>choice;
	}
	inorder(root);
	return 0;
}
