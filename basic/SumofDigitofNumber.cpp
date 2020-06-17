#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter number :- "<<endl;
	cin>>n;
	while(n>0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
