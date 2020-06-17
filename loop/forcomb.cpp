#include<iostream>
using namespace std;
void swap(int,int,int);
int main()
{
	int i=1,j=2,k=3;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				if((i!=j)&&(i!=k)&&(j!=k))
				swap(i,j,k);
			}
		}
	}
	return 0;
}
void swap(int i,int j, int k)
{
	int temp;
	temp=i;
	i=j;
	j=temp;
	cout<<i<<j<<k<<endl;
}
