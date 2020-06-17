#include<iostream>
using namespace std;
void fact(int);
void prime_check(int);
void even_check(int);
int main()
{
	int i,j;
	while(1)
	{
		cout<<"choices are as follows :-"<<endl;
		cout<<"1-factorial ."<<endl;
		cout<<"2-prime no. check ."<<endl;
		cout<<"3-odd or even check ."<<endl;
		cout<<"4-exit ."<<endl;
		cout<<"enter your choice :-"<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				cout<<"enter the no. :- "<<endl;
				cin>>j;
				fact(j);
				break;
			case 2:
				cout<<"enter the no. :- "<<endl;
				cin>>j;
				prime_check(j);
				break;
			case 3:
				cout<<"enter the no. :- "<<endl;
				cin>>j;
				even_check(j);
				break;
			case 4:
				exit(-1);		
		}
	}
}
void fact(int j)
{
	int k,f=1;
	for(k=j;k>=1;k--)
	f=f*k;
	cout<<"factorial of "<<j<<"="<<f<<endl;
}
void prime_check(int j)
{
	int k,flag=1;
	for(k=2;k<=j/2;k++)
	{
		if(j%k==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	cout<<"it is a prime no."<<endl;
	else
	cout<<"it is a composite no."<<endl;
}
void even_check(int j)
{
	if(j%2==0)
	cout<<"it is an even no."<<endl;
	else
	cout<<"it is an odd no."<<endl;
}
