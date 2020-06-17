#include<iostream>
using namespace std;
int powerexpo(int base,int expo)
{
	int flag=1;
	cout<<"base "<<base<<"expo "<<expo<<endl;
	for(int i=1;i<=expo;i++)
	{
		flag=flag*base;
	}
	cout<<flag<<endl;
	return flag;
}
int main()
{
	int i,k,l,j=0,digit;
	cout<<"enter any no. :- ";
	cin>>i;
	l=k=i;
	int count=0;
	while(k!=0)
	{
		count++;
		k=k/10;
	}
	cout<<count<<endl;
	while(l!=0)
	{
		digit=l%10;
		j=j+powerexpo(digit,count);
		l=l/10;
	}
	cout<<j<<endl;
	if(j==i)
	cout<<"it is an armstrong no. ";
	else
	cout<<"it is not an armstrong no. ";
	return 0;
}
