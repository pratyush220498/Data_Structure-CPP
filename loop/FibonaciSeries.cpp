#include<iostream>
using namespace std;
int main()
{
	int i,F,S,N=0,n;
	cout<<"enter a no.";
	cin>>n;
	F=0;
	S=1;
	cout<<F<<" "<<S<<" ";
	for(i=1;i<=n-2;i++)
	{
		N=F+S;
		cout<<N<<" ";
		F=S;
		S=N;
	}
	return 0;
}
