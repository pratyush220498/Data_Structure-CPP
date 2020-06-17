#include<iostream>
using namespace std;
int pow(int,int);
int main()
{
	int i,j,k;
	cout<<"enter the base no. :- ";
	cin>>i;
	cout<<"enter the exponent no. :-";
	cin>>j;
	k=pow(i,j);
	cout<<"result="<<k;
	return 0;
}
int pow(int i,int j)
{
	int k,sum=1;
	for(k=1;k<=j;k++)
	{
		sum=sum*i;
	}
	return sum;
}
