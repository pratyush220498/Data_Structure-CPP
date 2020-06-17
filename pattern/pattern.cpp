#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"enter the no. :-"<<endl;
	cin>>i;
	for(j=1;j<=i;j++)
	{
		for(k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
