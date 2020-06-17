#include<iostream>
using namespace std;
void prime(int,int);
int main()
{
	int i,lr,ur;
	cout<<"enter the n0. of elemnts u want to print :-";
	cin>>i;
	cout<<"enter the lower range :-";
	cin>>lr;
	prime(i,lr);
	return 0;
}
void prime(int i,int lr)
{
	int k=1,j,l,flag=1;
	while(k<=i)
	{
		j=lr;
			flag=1;
			for(l=2;l<=j/2;l++)
			{
				if(j%l==0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				cout<<j<<"\t";
				k++;
			}
			lr++;				
	}
}
