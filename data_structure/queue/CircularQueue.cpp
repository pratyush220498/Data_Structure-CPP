#include<iostream>
using namespace std;
#define size 7
int q[size];
int front=0;
int rear=0;
int count=0;
void insertq();
void deleteq();
void traverse();
int main()
{
	int i;
	char ch;
	cout<<" circular queue ";
	do
	{
		cout<<"1.INSERTION 2.DELETION 3.TRAVERSE"<<endl;
		cout<<"enter ur choice :-";
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
		cout<<"do u want to continue :- ";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	return 0;
}
void deleteq()
{
	if(count==0||front>rear)
	cout<<"underflow"<<endl;
	else
	{
		cout<<"item deleted is :-";
		cout<<q[front]<<endl;
		front=(front+1)%size;
		count--;
	}	
	
}
void insertq()
{
	if(count==size||front==(rear+1)%size)
	cout<<"overflow."<<endl;
	else
	{
		cout<<"enter item :-";
		cin>>q[rear];
		rear=(rear+1)%size;
		count++;
	}	
}
void traverse()
{
	int i;
	int temp=front;
	for(i=1;i<=count;i++)
	{
		cout<<q[temp]<<"\t";
		temp=(temp+1)%size;
	}
	cout<<endl;
}
