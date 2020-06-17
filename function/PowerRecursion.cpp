#include<iostream>
using namespace std;
int pow(int,int);
int main()
{
	int i,j,k;
	cout<<"enter the base term :- ";
	cin>>i;
	cout<<"enter the exponent term :- ";
	cin>>j;
	k=pow(i,j);
	cout<<"result = "<<k;
	return 0;
}
int pow(int i,int j)
{
	if(j==0)
	return 1;
	else 
	return i*pow(i,j-1);
}
