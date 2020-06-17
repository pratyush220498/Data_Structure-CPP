#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=2*i;j++)
		{
			cout<<k<<" ";
			k=k+1;
		}
		cout<<endl;
	}
	return 0;
}
