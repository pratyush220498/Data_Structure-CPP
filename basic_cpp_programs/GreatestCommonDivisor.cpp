#include<iostream>
using namespace std;
int main()
{
	int i,j,k,big,small;
	cout<<"enter first no. :-";
	cin>>i;
	cout<<"enter second no. :-";
	cin>>j;
	if(i>j)
	{
		big=i;
		small=j;
	}
	else
	{
		big=j;
		small=j;
	}
	for(k=big/2;k>=1;k--)
	{
		if((big%k==0)&&(small%k==0))
		{
			break;
		}
	}
	cout<<"H.C.F of "<<i<<" & "<<j<<" = "<<k;
	return 0;
}
