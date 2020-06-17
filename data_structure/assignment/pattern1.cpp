#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1,l,m=3;
	for(i=0;i<6;i++)
	{
		if(i<3)
		{
				for(j=0;j<2*i+2;j++)
			{
				cout<<k<<" ";
				k=k+1;
			}
		}
		else
		{
			for(l=1;l<=i+m;l++)
			{
				cout<<k<<" ";
				k=k+1;
			}
			m=m-3;
		}
		cout<<endl;
	}
	return 0;
}
