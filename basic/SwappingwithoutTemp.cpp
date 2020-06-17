#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a =";
	cin>>a;
	cout<<"enter b =";
	cin>>b;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"swapped values are :";
	cout<<"\na="<<a;
	cout<<"\nb="<<b;
	return 0; 
}
