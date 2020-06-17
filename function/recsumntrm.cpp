#include<iostream>
using namespace std;
int sum(int);
int main()
{
	int i,j;
	cout<<"enter the no. :- ";
	cin>>i;
	j=sum(i);
	cout<<"sum of "<<i<<"term is = "<<j;
	return 0;
}
int sum(int i)
{
	if(i==0)
	return 0;
	else
	return i + sum(i-1);
}
