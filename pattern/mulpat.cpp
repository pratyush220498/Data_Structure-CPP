#include<iostream>
using namespace std;
int main()
{
	int i,j,k=2,y;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			y=k*j;
			cout<<y<<"\t";
		}
		cout<<"\t y="<<y;
		cout<<endl;
		k=y;
	}
	return 0;
}
