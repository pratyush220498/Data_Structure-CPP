#include<iostream>
using namespace std;
int main()
{
	int r,i,c,j,a[20],b[20],k,l;
	cout<<"enter the no. of elements :- ";
	cin>>r;
	cout<<"enter elements in the first array :-";
	for(i=1;i<=r;i++)
	{
			cin>>a[i];
	}
	cout<<" first array :-"<<endl;
	for(i=1;i<=r;i++)
	{
			cout<<a[i];
			cout<<endl;
	}
	cout<<"reverse array :-"<<endl;
		for(i=r;i>=1;i--)
	{
		cout<<a[i];
		cout<<endl;
	}
	return 0;
}
