#include<iostream>
using namespace std;
int main()
{
	int i,j=0;
	int size;
	cout<<"enter size :- ";
	cin>>size;
	int k[size];
	for(i=0;i<size;i++)
	{
		cout<<"enter the marks of "<<i+1<<" student :-";
		cin>>k[i];
	}
	for(i=0;i<size;i++)
	{
		j=j+k[i];
	}
	float l=(float)j/size;
	cout<<"sum of all marks are :-"<<j<<endl;
	cout<<"avg. of all marks are :-"<<l;
	return 0;
}
