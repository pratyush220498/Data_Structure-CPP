#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int i,j,k,sum=0,l;
	cout<<"enter the number :- "<<endl;
	cin>>i;
	k=i;
	while(i>0)
	{
		j=i%10;
		l=fact(j);
		sum=sum+l;
		i=i/10;
	}
	cout<<"sum="<<sum<<endl;
	if(k==sum)
	cout<<"it is a strong no. ";
	else
	cout<<"it is a weak no.";
	return 0;
}
int fact(int j)
{
	int f=1;
	for(int i=j;i>=1;i--)
	f=f*i;
	return f;
}
