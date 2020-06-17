#include<iostream>
using namespace std;
int main()
{
	int i,j,flag=0;
	cout<<"enter the no. :- ";
	cin>>i;
	cout<<"the factors are :-";
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			cout<<j<<"\t";
		}		
	}
	return 0;
}
