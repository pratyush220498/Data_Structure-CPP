#include<iostream>
using namespace std;

#define size 5

void insert();
void remove();

void insfirst(int[]);
void inslast(int[]);
void inspos(int[]);

void delfirst(int[]);
void dellast(int[]);
void delpos(int[]);

void traverse(int[]);

int n=0;
int a[size];

int main()
{
	cout<<"             :    INSERTION AND DELETION     :            "<<endl;
	int i,j,k;
	char ch;
	do
	{
		cout<<"UR CHOICES ARE - "<<endl;
		cout<<"1.insertion - "<<endl;
		cout<<"2.deletion - "<<endl;
		cout<<"enter ur choice :- "<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				insert();
				break;
				
			case 2:
				remove();
				break;
			default :
				cout<<"u have entered wrong choice ."<<endl;
		}
		cout<<"do u want to insert or delete . (y\n) :";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	return 0;
}

void insert()
{
	cout<<"                       : INSERTION :"<<endl;
	int i,j,k;
	char ch;
	do
	{
	
		if(n==5)
		{
			cout<<"ARRAY OVERFLOW : "<<endl;
			main();	
		}
		else
		{
			cout<<"your choices are :-"<<endl;
			cout<<"1.insert at first "<<endl;
			cout<<"2.insert at last "<<endl;
			cout<<"3.insert at position "<<endl;
			cout<<"enter your choice :-"<<endl;
			cin>>k;
			switch(k)
			{
				case 1:
					insfirst(a);
					traverse(a);
					break;
				case 2:
					inslast(a);
					traverse(a);
					break;
				case 3:
					inspos(a);
					traverse(a);
					break;
				default:
					cout<<"you have entered wrong choice :"<<endl;
		}	
		cout<<"do you want to continue (y\n) :-"<<endl;
		cin>>ch;
	}
}	
while(ch=='y'||ch=='Y');	
}

void remove()
{
	cout<<"                          : DELETION :"<<endl;
	int i,j,k,l;
	char ch;
	do
	{
		if(n==0)
		{
			cout<<"array UNDERFLOW : "<<endl;
			main();	
		}
		else
		{
			cout<<"your choices are :-"<<endl;
			cout<<"1.delete at first "<<endl;
			cout<<"2.delete at last "<<endl;
			cout<<"3.delete at position "<<endl;
			cout<<"enter your choice :-"<<endl;
			cin>>k;
			switch(k)
			{
				case 1:
					delfirst(a);
					traverse(a);
					break;
				case 2:
					dellast(a);
					traverse(a);
					break;
				case 3:
					delpos(a);
					traverse(a);
					break;
				default:
					cout<<"you have entered wrong choice :"<<endl;
		}	
		cout<<"do you want to continue (y\n) :-"<<endl;
		cin>>ch;
	}
}	
while(ch=='y'||ch=='Y');
}

void insfirst(int a[])
{
	int value,i,j;
	cout<<"enter the value :"<<endl;
	cin>>value;
	for(i=n-1;i>=0;i--)
	a[i+1]=a[i];
	a[0]=value;
	n=n+1;
	cout<<"n="<<n<<endl;
}

void inspos(int a[])
{
	int value,pos,j,i;
	cout<<"enter the position :-"<<endl;
	cin>>pos;
	if(pos==1)
	insfirst(a);
	else if(pos==5)
	inslast(a);
	else if(pos<0||pos>5)
	cout<<"u have entered wrong position"<<endl;
	else 
	{
		cout<<"enter the value :"<<endl;
		cin>>value;
		for(j=n-1;j>=pos-1;j--)
		a[j+1]=a[j];
		a[pos-1]=value;
		n=n+1;
		cout<<"n="<<n<<endl;
	}
}

void inslast(int a[])
{
	int value,j;
	cout<<"enter the value :"<<endl;
	cin>>value;
	a[n]=value;
	n=n+1;	
	cout<<"n="<<n<<endl;
}

void traverse(int a[])
{
	int j;
	cout<<"array = "<<endl;
	for(j=0;j<n;j++)
	cout<<a[j]<<"\t";
	cout<<"n="<<n<<endl;
}

void delfirst(int a[])
{
	int value,i,j;
	value=a[0];
	for(i=0;i<=n-2;i++)
	a[i]=a[i+1];
	cout<<"item deleted is = "<<value;
	n=n-1;
	cout<<"n="<<n<<endl;
}

void delpos(int a[])
{
	int value,pos,j,i;
	cout<<"enter the position :-"<<endl;
	cin>>pos;
	if(pos==1)
	delfirst(a);
	else if(pos==n)
	dellast(a);
	else if(pos<0||pos>5)
	cout<<"u have entered wrong position"<<endl;
	else if(pos>0&&pos<5)
	{
		value=a[pos-1];
		for(j=pos-1;j<=n-2;j++)
		a[j]=a[j+1];
		n=n-1;
		cout<<"item deleted is = "<<value;
		cout<<"n="<<n<<endl;
		}
	else
	remove();
}

void dellast(int a[])
{
	int value,j;
	value=a[n];
	cout<<"item deleted is = "<<value;
	n=n-1;	
	cout<<"n="<<n<<endl;
}


