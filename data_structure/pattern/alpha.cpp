#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=5;j>i;j--)
		cout<<" ";
		if(i==1)
		{
			cout<<ch<<" "<<endl;
		}
		else
		{
			for(k=1;k<=i;k++)
			{
				cout<<ch;
				ch++;
			}
			ch--;
			for(l=1;l<=i-1;l++)
			{
				ch--;
				cout<<ch;
			}
			cout<<endl;
		}
	}
	return 0;
}
