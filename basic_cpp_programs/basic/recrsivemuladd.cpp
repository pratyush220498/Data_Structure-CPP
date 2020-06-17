#include<iostream>
using namespace std;
int mul(int,int);
int main()
{
	int i,j,k;
	cout<<"enter first no. :";
	cin>>i;
	cout<<"enter second no. :";
	cin>>j;
	k=mul(i,j);
	cout<<"multiplication of two no. are :";
	cout<<k;
	return 0;
}
int mul(int i,int j)
{
	if(j==0)
	return 0;
	else
	return i+mul(i,j-1);
}
