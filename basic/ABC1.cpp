#include<iostream>
using namespace std;
int main()
{
	int x=30;
	int *z,*y=&x;
	z=y;
	cout<<y<<" "<<z<<endl;
	++*y=++*z;
	cout<<*y<<" "<<*z<<endl;
	return 0;
}
