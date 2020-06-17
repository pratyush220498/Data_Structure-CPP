#include<iostream>
using namespace std;
int main()
{
	int i,l,m=1,sum=0,j,k;
	cout<<"enter the range :-"<<endl;
	cin>>i>>j;
	for(k=i;k<=j;k++)
	{
		m=1;
		for(l=1;l<=k;l++)
		{
			m=m*k;
			cout<<"m="<<m<<"\t";	
		}
		cout<<endl;
		sum=sum+m;	
	}
	cout<<sum;
	return 0;
}
