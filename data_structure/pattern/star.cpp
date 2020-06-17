#include<iostream>
using namespace std;
int main()
{
	int i,j,k=4;
	for(i=1;i<=4;i++)
	{
		for(int l=3;l>=i;l--)
		cout<<" ";
		for(j=1;j<=(2*i)-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
