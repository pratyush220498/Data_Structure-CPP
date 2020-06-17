#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int i=3,j=4,k,l;
	k=add(i,j);
	l=add(i,j);
	cout<<k<<endl<<l;
	return 0;
}
int add(int ii,int jj)
{
	 int kk,ll;
	 kk=ii+jj;
	 ll=ii*jj;
	 return(kk,ll);
}


