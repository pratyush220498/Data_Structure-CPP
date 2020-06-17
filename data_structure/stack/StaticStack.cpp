#include<iostream>
using namespace std;

#define size 5
int stack[size];
int count=0;
void push();
void pop();
void traverse();
int top=-1;

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
				push();
				break;
			case 2:
				pop();
				break;
			default:
				cout<<"u have entered wrong choice."<<endl;				
		}
		cout<<"do u want to continue :-"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}

void push()
{
	if(top==size-1)
	cout<<"stack overflow"<<endl;
	else
	{
		cout<<"enter data :- ";
		cin>>stack[++top];
		count++;
		traverse();
	}
}

void pop()
{
	int temp;
	if(top==-1)
	cout<<"stack underflow"<<endl;
	else
	{
		cout<<"item deleted is :-";
		cout<<stack[top--]<<endl;
	}
	traverse();
}

void traverse()
{
	int j;
	for(j=0;j<=top;j++)
	cout<<stack[j]<<"\t";
	cout<<endl;
}

