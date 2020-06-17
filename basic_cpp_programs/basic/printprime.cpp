#include<iostream>
using namespace std;
int main()
{
	int i,j,k,flag;
	cout<<" enter the no. : ";
	cin>>i;
	for(j=2;j<=i;j++)
	{
		flag=1;
		for(k=2;k<=j/2;k++)
		{
			if(j%k==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<j<<"\t";
	}
	return 0;
}
