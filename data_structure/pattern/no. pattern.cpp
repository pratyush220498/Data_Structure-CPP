#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=2*i+1;j<=4*i+2;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
