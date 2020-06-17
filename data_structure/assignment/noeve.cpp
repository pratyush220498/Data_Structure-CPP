#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=0;i<5;i++)
	{
		for(j=1;j<=2*i+2;j++)
		{
			if(k<=20)
			{
				cout<<k<<" ";
				k++;
	
			}
		}
		cout<<endl;
	}
	return 0;
}
