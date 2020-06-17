#include<iostream>
using namespace std;
void comb(int,int);
int main()
{
	int i,j,k;
	cout<<"enter first no. :-";
	cin>>i;
	cout<<"enter second no. :-";
	cin>>j;
	comb(i,j);
	return 0;
}
void comb(int i,int j)
{
	int prod1=1,prod2=1,k;
	if(j>i-j)
		j=i-j;
	cout<<i<<" "<<j<<endl;	
	for(k=j;k>=1;k--)
	{
		prod1=prod1*i;
		prod2=prod2*k;
		i--;
	}
	cout<<prod1/prod2;
	
}
