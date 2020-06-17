#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int i,j;
	cout<<"enter the no. :-";
	cin>>i;
	j=fact(i);
	cout<<"factorial of "<<i<<"="<<j;
	return 0;
}
int fact(int i)
{
    if(i==1||i==0)
    return 1;
    else
    return i*fact(i-1);
}
