#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2*i+2;j++)
		{
			cout<<k<<" ";
			k=k+1;
		}
		cout<<endl;
	}
	return 0;
}
