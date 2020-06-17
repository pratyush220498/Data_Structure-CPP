#include<iostream>
using namespace std;
int fib(int);
int main()
{
	int i,j,k;
	cout<<"enter the no.";
	cin>>i;
	for(j=0;j<=i-1;j++)
	{
		k=fib(j);
		cout<<k<<"\t";
	}
	return 0;
}
int fib(int j)
{
	if(j==0)
	return 0;
	else if(j==1)
	return 1;
	else
	return fib(j-1)+fib(j-2);
}
