#include<iostream>
using namespace std;

void first(int[]);
void last(int[]);
void pos(int[]);
void traverse(int[]);

int n=0;

int main()
{
	cout<<": DELETION :"<<endl;
	int i,j,k,a[5],l;
	cout<<"enter elements in array :";
	for(l=0;l<5;l++)
	{
		cin>>a[l];
		n++;
	}
	char ch;
	do
	{
	
		if(n==0)
		{
			cout<<"array UNDERFLOW : ";
			exit(-1);	
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
	value=a[0];
	for(i=0;i<=n-2;i++)
	a[i]=a[i+1];
	cout<<"item deleted is = "<<value;
	n=n-1;
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
	else if(pos<0||pos>n)
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
	main();
}

void last(int a[])
{
	int value,j;
	value=a[n];
	cout<<"item deleted is = "<<value;
	n=n-1;	
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

