#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		cout<<" ";
		for(k=1;k<=i;k++)
		{
			if(k%2==0)
			cout<<"1"<<" ";
			else
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
