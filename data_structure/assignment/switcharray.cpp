#include<iostream>
using namespace std;

void first(int[]);
void last(int[]);
void pos(int[]);
void traverse(int[]);

int n=0;

int main()
{
	cout<<": INSERTION :"<<endl;
	int i,j,k,a[5];
	char ch;
	do
	{
	
		if(n==5)
		{
			cout<<"array overflow : ";
			exit(-1);	
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
					first(a);
					traverse(a);
					break;
				case 2:
					last(a);
					traverse(a);
					break;
				case 3:
					pos(a);
					traverse(a);
					break;
				default:
					cout<<"you have entered wrong choice :"<<endl;
		}	
		cout<<"do you want to continue (y\n) :-"<<endl;
		cin>>ch;
	}
}	while(ch=='y'||ch=='Y');
	return 0;
}

void first(int a[])
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

void pos(int a[])
{
	int value,pos,j,i;
	cout<<"enter the position :-"<<endl;
	cin>>pos;
	if(pos==1)
	first(a);
	else if(pos==5)
	last(a);
	else if(pos<0||pos>5)
	cout<<"u have entered wrong position"<<endl;
	else if(pos>0&&pos<5)
	{
		cout<<"enter the value :"<<endl;
		cin>>value;
		for(j=n-1;j>=pos-1;j--)
		a[j+1]=a[j];
		a[pos-1]=value;
		n=n+1;
		cout<<"n="<<n<<endl;
		}
	else
	main();
}

void last(int a[])
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

