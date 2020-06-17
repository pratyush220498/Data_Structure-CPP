#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,j;
	cout<<"enter the no. : ";
	cin>>i;
	cout<<"the factors are : ";
	for(j=1;j<=(i/2);j++)
	{
		if((i%j)==0)
		{
			cout<<j<<"\t";
			sum=sum+j;
		}
	}
	cout<<endl;
	cout<<"the sum of divisors is : "<<sum<<endl;
	if(sum==i)
	cout<<"it is a perfect number";
	else 
	cout<<"it is not a perfect no.";
	return 0;
}
