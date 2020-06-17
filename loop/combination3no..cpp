#include<iostream>
using namespace std;
void swap(int,int,int);
int main()
{
	int i=1,j=2,k=3;
	swap(j,k,i);
	swap(k,j,i);
	swap(i,j,k);
	swap(j,i,k);
	swap(i,k,j);
	swap(k,i,j);
	return 0;
}
void swap(int i,int j, int k)
{
	int temp;
	temp=i;
	i=j;
	j=temp;
	cout<<i<<j<<k<<endl;
}
