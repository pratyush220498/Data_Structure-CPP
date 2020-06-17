#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,r=4;
	for(i=1;i<=4;i++)
	{
		for(j=r;j>i;j--)
		cout<<" ";
		for(k=0;k<i;k++)
		cout<<k;
		if(i>1)
		{
			for(l=i-2;l>=0;l--)
			cout<<l;
		}
		cout<<endl;
	}
	return 0;
}
