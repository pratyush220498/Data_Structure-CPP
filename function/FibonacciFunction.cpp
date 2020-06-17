#include<iostream>
using namespace std;
void fib(int);
int main()
{
	int i;
	cout<<"enter the upper range :- ";
	cin>>i;
	fib(i);
	return 0;
}
void fib(int i)
{
	int f,s,j,n;
	f=0;
	s=1;
	cout<<f<<"\t"<<s<<"\t";
	for(j=1;j<=i-2;j++)
	{
		n=f+s;
		f=s;
		s=n;
		cout<<n<<"\t";
	}
}
