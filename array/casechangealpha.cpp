#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char ch,bh;
	cout<<"enter the alphabet :- ";
	cin>>ch;
	i=ch;
	cout<<i<<endl;
	if((i>=65)&&(i<=90))
	{
		j=i+32;
	}
	else if((i>=90)&&(i<=122))
	{
		j=i-32;
	}
	else
	cout<<"you have entered wrong character"<<endl;
	cout<<j<<endl;
	bh=char(j);
	cout<<bh<<endl;
	return 0;
	
}
