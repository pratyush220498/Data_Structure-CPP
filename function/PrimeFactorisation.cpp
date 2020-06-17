#include<iostream>
#include<math.h>
using namespace std;
void prime(int);
int primecheck(int k)
{
	for(int i=2;i<=sqrt(k);i++)
	{
		if(k%i==0)
			return 0;
	}
		return 1;
}
int main()
{
	int i,j;
	cout<<"enter a no. :";
	cin>>i;
	cout<<"factors :-"<<endl;
	prime(i);
	return 0;
}
void prime(int i)
{
	for(int k=2;k<=i;k++)
	{
		if(i%k==0&&primecheck(k))
		{
			cout<<k<<" ";
			i=i/k;
			break;
		}
	}
	if(i>1)
	prime(i);
}

