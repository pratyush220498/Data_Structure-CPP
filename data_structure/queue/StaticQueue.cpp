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
	if(rear==size-1)
	cout<<"queue overflow ."<<endl;
	else
	{
		cout<<"enter data :- "<<endl;
		cin>>q[rear++];
		count++;
	}
	traverse();
}
void deleteq()
{
	if(front==rear)
	cout<<"queue underflow ."<<endl;
	else
	{
		cout<<"item deleted is :-";
		cout<<q[front++]<<endl;
		count--;
	}
	traverse();
}
void traverse()
{
	int i;
	for(i=front;i<rear;i++)
	cout<<q[i]<<"\t";
	cout<<endl;
}
