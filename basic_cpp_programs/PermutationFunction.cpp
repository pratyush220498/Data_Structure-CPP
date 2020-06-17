#include<iostream>
using namespace std;
int permutation(int,int);
int main()
{
	int i,j,k,l,prod1=1,prod2=1;
	cout<<"enter first no. :-";
	cin>>i;
	cout<<"enter second no. :-";
	cin>>j;
	k=permutation(i,j);
	cout<<k;
	
	return 0;
}
int permutation(int i,int j)
{
	int prod1=1,k;
	for(k=j;k>=1;k--)
	{
		prod1=prod1*i;
		i--;
	}
		return prod1;
}
