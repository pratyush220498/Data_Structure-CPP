#include<iostream>
using namespace std;
int main()
{
	int i,j,k,x=2,y=0,z;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			y=x+y;
			cout<<y<<"\t";
		}
		x=y;
		y=0;
		cout<<endl;
	}
	return 0;
}
