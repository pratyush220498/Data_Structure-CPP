#include<iostream>
using namespace std;
int main()
{
	int i,j,temp;
	cout<<"enter first no. :"<<endl;
	cin>>i;
	cout<<"enter second no. :"<<endl;
	cin>>j;
	cout<<"before swapping the no's are :-"<<endl;
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	i=i+j;
	j=i-j;
	i=i-j;
	cout<<"after swapping the no's are :- "<<endl;
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	return 0;
}
