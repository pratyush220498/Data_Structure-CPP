#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int i,j,k;
	cout<<"enter first no. :- ";
	cin>>i;
	cout<<"enter second no. :- ";
	cin>>j;
	cout<<"before swspping no's are :- "<<endl;
	cout<<"i = "<<i<<endl;
	cout<<"j = "<<j<<endl;
	swap(i,j);
	cout<<"after swspping no's are :- "<<endl;
	cout<<"i = "<<i<<endl;
	cout<<"j = "<<j<<endl;
	cout<<endl;
	return 0;
}
void swap(int i,int j)
{
	int temp;
	temp=i;
	i=j;
	j=temp;
	cout<<"i = "<<i<<endl;
	cout<<"j = "<<j<<endl;
}
