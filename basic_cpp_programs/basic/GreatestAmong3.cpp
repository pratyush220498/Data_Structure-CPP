#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"enter first no. :"<<endl;
	cin>>i;
	cout<<"enter second no. :"<<endl;
	cin>>j;
	cout<<"enter third no. :"<<endl;
	cin>>k;
	cout<<"given no's are :-"<<endl;
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	cout<<"k="<<k<<endl;
	if(i>j&&i>k)
	cout<<"greater no. is : "<<i;
	else if(j>k&&j>i)
	cout<<"greater no. is : "<<j;
	else
	cout<<"greater no. is : "<<k;
	return 0;
}
