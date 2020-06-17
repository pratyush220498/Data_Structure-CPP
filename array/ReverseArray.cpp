#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[20],b[20];
	cout<<"enter the no. of elements :-";
	cin>>n;
	cout<<"enter the element in the array :-";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"entered array is :-";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
	int k=0;
	for(i=n-1;i>=0;i--)
	{
		b[k]=a[i];
		k++;
	}
	cout<<"reverse array is :-"<<endl;
	for(j=0;j<n;j++)
	cout<<b[j]<<endl;
	return 0;
}
