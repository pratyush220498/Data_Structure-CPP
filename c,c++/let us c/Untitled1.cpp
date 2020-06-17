#include<iostream>
#include<string.h>
void fun(int);
using namespace std;
int main()
{
	int i=3;
	fun(i);
	return 0;
}
void fun(int n)
{
	if(n>0)
	{
		cout<<n<<endl;
		fun(--n);
		cout<<n;
		fun(--n);
	}
}
