#include<iostream>
using namespace std;
void permutation(int,int);
int main()
{
	int i,j,k;
	cout<<"enter first no. :-";
	cin>>i;
	cout<<"enter second no. :-";
	cin>>j;
	permutation(i,j);
	return 0;
}
void permutation(int i,int j)
{
	int prod1=1,count=1,k;
	for(k=j;k>=1;k--)
	{
		prod1*=i;					//		if(count<=j)
		i--;						//		{
									//			prod1=prod1*k;
									//			count++;
									//		}		
	}
	cout<<prod1;
}
