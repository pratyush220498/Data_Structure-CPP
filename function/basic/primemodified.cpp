#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
void primefact(int,int);
int primenum(int);
int main()
{
	int i,j;
	cout<<"enter a no. :";
	cin>>i;
	j=primenum(i);
	if(j==1)
		cout<<"1"<<" "<<i<<endl;
	else
		primefact(i,2);
	return 0;
}
int primenum(int i)
{
	for(int k=2;k<=sqrt(i);k++)
	{
		if(i%k==0)
		{
			return 0;
		}
	}
	return 1;
}
void primefact(int i,int k)
{
		if(i%k==0&&primenum(k))
		{
			cout<<k<<" "<<endl;
		}		
		if(k<=i)
		{
			primefact(i,++k);
		}
		else 
		return;			
}
