#include<iostream>
using namespace std;
int main()
{
	int i,j,k,num;
	cout<<"enter the number :- ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=(2*num)-1;j++)
		{
			for(k=1;K<=i;k++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
