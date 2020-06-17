#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k=2;
	int p=0;
	while(p!=1001)
	{
		int flag=0;
		for(int l=2;l<=sqrt(k);l++)
		{
			if(k%l==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			j=k;
			p++;
		}
		k++;
	}
	cout<<"j="<<j<<"\t"<<"p="<<p;
}
