#include<iostream>
using namespace std;
int main()
{
	int i,j,k,flag=0;
	cout<<"enter the no. of elements :-";
	cin>>k;
	int a[k];
	cout<<"enter the element in the array :-";
	for(i=0;i<k;i++)
	cin>>a[i];
	cout<<"entered array is :-"<<endl;
	for(i=0;i<k;i++)
	cout<<a[i]<<endl;
	cout<<"enter the element u want to search :-";
	cin>>j;
	for(i=0;i<k;i++)
	{
		flag=0;
		if(a[i]==j)
		{
			flag=1;
			cout<<"search successful :"<<endl;
			cout<<"element found at position :-"<<i+1<<endl;
			cout<<"elements found at index :-"<<i<<endl;			
			break;
		}
	}
	if(flag==0)
	{
		cout<<"unsuccessful search :"<<endl;
		cout<<"you have entered wrong element.";
	}
	return 0;
}
