#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m;
	cout<<"enter first no. :-";
	cin>>i;
	cout<<"enter second no. :-";
	cin>>j;
	cout<<"H.C.F of "<<i<<" & "<<j<<" = ";
	do
	{
		if(i>j)
		{
			i=i-j;
			k=i;
					
		}
		else
		{
			j=j-i;
			k=j;
		}
	}
	while(i!=j);
	cout<<k;
	return 0;
}
