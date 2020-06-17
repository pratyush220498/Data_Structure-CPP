#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int k;
	cout<<"enter two number :-"<<endl;
	cin>>i>>j;
	int count=0;
	while(i>=j)
	{
		i=i-j;
		count++;
	}
	cout<<"quotient="<<count<<endl;
	cout<<"reminder="<<i<<endl;
	return 0;
}
