#include<iostream>
using namespace std;
void inc(int&,int&);
int main()
{
	int i,j,k;
	cout<<"enter first no. :- ";
	cin>>i;
	cout<<"enter second no. :- ";
	cin>>j;
	cout<<"before increament no's are :- "<<endl;
	cout<<"i = "<<i<<endl;
	cout<<"j = "<<j<<endl;
	inc(i,j);
	cout<<"after increament no's are :- "<<endl;
	cout<<"i = "<<i<<endl;
	cout<<"j = "<<j<<endl;
	cout<<endl;
	return 0;
}
void inc(int &i,int &j)
{
	i=i+1;
	j=j+1;
	cout<<"inc"<<endl;
	cout<<"i = "<<i<<endl;
	cout<<"j = "<<j<<endl;
}
