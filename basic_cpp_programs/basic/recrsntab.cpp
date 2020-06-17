#include<iostream>
using namespace std;
int tab(int,int);
int main()
{
	int i,j,k;
	cout<<"enter the no. :-";
	cin>>i;
	for(j=1;j<=10;j++)
	{
		k=tab(i,j);
		cout<<i<<"*"<<j<<"="<<k<<endl;
	}
	return 0;
}
int tab(int i,int j)
{
	return i*j;
}
