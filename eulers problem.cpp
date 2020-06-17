#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l=0;
	int num,r,digit;
	for(i=999;i>=100;i--)
	{
		for(j=999;j>=100;j--)
		{
			k=i*j;
			num=k;
			r=0;
			digit=0;
		while(num>0)
			{
				digit=num%10;
				r=r*10+digit;
				num=num/10;
			}
		if(k==r)
			{
				if(k>=l)
				l=k;
			}	
		}
	}
	cout<<"l="<<l;
	return 0;
}


