#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
typedef struct node Node;
Node *front;
Node *rear;
Node *temp;
Node *newnode;
void insertq();
void deleteq();
void traverse()
{
	temp=front;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<endl;
}
void getnode()
{
	newnode=new Node;
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
	cout<<" 1. insert 2. delete 3. traverse"<<endl;
	cin>>i;
	switch(i)
		{
			case 1:
				insertq();
				break;
			case 2:
				deleteq();
				break;
			case 3:
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
void insertq()
{
	getnode();
	if(front==NULL)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	traverse();
}
void deleteq()
{
	if(front==NULL)
	{
		cout<<"queue underflow ."<<endl;
	}
	else if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front->next;
			traverse();
	}
}
