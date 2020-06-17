#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
			cout<<"*";
		}
		cout<<endl;
		for(k=1;k<=i;k++)
		{
			cout<<" ";
		}
	}
	return 0;
}
