#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n=5,m=71;
	char ch;
	for(i=1;i<=7;i++)
	{
		if(i==1)
		{
			for(j=65;j<=71;j++)
			{
				ch=j;
				cout<<ch;
			}
			for(k=70;k>=65;k--)
			{
				ch=k;
				cout<<ch;
			}
			cout<<endl;
		}
		else
		{
			for(j=65;j<=m;j++)
			{
				ch=j;
				cout<<ch;
			}
				for(k=0;k<=(3*i)-n;k++)
				cout<<" ";			
			for(l=m;l>=65;l--)
			{
				ch=l;
				cout<<ch;
			}
				cout<<endl;
		}
		m--;
		n++;
	}
	return 0;
	
}
