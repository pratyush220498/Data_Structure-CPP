#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m=1;
	for(i=1;i<5;i++)
	{
		for(j=4;j>=i;j--)
		cout<<" ";
		for(k=1;k<=i;k++)
		{
			cout<<" "<<m;
			m++;
		}
		cout<<endl;
	}
	return 0;
}
