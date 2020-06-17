#include<iostream>
using namespace std;
float avg(int,int,int);
int main()
{
	int i,j,k;
	float y;
	cout<<"enter first no. :-";
	cin>>i;
	cout<<"enter second no. :-";
	cin>>j;
	cout<<"enter third no. :-";
	cin>>k;
	y=avg(i,j,k);
	cout<<y;
	return 0;	
}
float avg(int i,int j,int k)
{
	return (i+j+k)/3;
}
