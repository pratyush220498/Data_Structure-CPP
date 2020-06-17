#include<iostream>
using namespace std;
int main()
{
	int i,j=0,n,k=0,l=0,m=0,a[20];
	cout<<"enter the no. of elements in the array :-";
	cin>>n;
	cout<<"enter elements in the array :-";
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		if(a[i]<0)
		{
			j++;
		}
		if(a[i]>0)
		{
			k++;
		}
		if(a[i]>0&&a[i]%2==0)
		{
			l++;
		}
		if(a[i]>0&&(a[i]%2)!=0)
		{
			m++;
		}
	}
	cout<<"no. of positive term :- "<<k<<endl;
	cout<<"no. of negative term :- "<<j<<endl;
	cout<<"no. of even term :- "<<l<<endl;
	cout<<"no. of odd term :- "<<m<<endl;
	return 0;
}
