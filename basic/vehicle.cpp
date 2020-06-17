#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int a[size][3];
	int b[size];
	int max=INT_MIN;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<3;j++)
		cin>>a[i][j];
	}
	for(int i=0;i<size;i++)
	{
		b[i]=(sqrt((a[i][0]*a[i][0])+(a[i][1]*a[i][1])))/a[i][2];
		if(b[i]>max)
			max=b[i];
	}
	int c[max+1];
	for(int i=0;i<max+1;i++)
		c[i]=0;
	for(int i=0;i<size;i++)
		c[b[i]]++;
	int count=0;
	for(int i=0;i<max+1;i++)
	{
		if(c[i]>1)
		{
			int k=1;
			for(int j=1;j<=2;j++)
			{
				k=k*c[i];
				c[i]--;
			}
			k=(k/2);
			count=count+k;
		}
	}
	cout<<count;
}
