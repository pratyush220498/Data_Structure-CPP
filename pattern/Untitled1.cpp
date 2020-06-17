#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m=1;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		cout<<" ";
		for(k=1;k<=i;k++)
		{
			for(l=m;l<=i;l++)
			{
				cout<<" "<<l;
			}
		}
		cout<<endl;
		m++;
	}
	return 0;
}
