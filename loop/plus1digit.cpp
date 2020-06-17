#include<iostream>
using namespace std;
int main()
{
	int i,j,a[10],b[10],k,sum=0,l,m=1,n=1,c=1;
	cout<<"enter the number :- "<<endl;
	cin>>i;
	k=i;
	while(i>0)
	{
		j=i%10;
		if(j<9)
		{
			j=j+1;
			if(j<9)
			{
				a[n]=j;
				i=i/10;
				n++;
			}
			else
			{
				j=0;
				a[n]=j;
				i=i/10;
				i=i+1;
				n++;
			}
		}
		else
		{
			j=0;
			a[n]=j;
			i=i/10;
			i=i+1;
			n++;
		}
	}
	int t=1,p=n-1;
	while(t<n)
	{
		cout<<a[t]<<"\t";
		b[p]=a[t];
		p--;
		t++;
	}
	cout<<endl;
	while(m<n)
	{
		cout<<b[m]<<"\t";
		m++;
	}
	return 0;
}

