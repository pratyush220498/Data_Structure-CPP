#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		cout<<"*";
		for(l=0;l<2*i-2;l++)
		cout<<" ";
		for(k=5;k>=i;k--)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
