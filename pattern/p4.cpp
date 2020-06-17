#include<iostream>
using namespace std;
int main()
{
	int i,j,k,num;
	cout<<"enter the number :- ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(j=num;j>=i;j--)
			{
				cout<<" ";
			}
		for(k=1;k<=i;k++)
		cout<<" *";
			cout<<endl;
	}
	return 0;
}
