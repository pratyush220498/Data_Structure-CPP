#include<iostream>
using namespace std;
#define size 5
int a[size];
int n=0;
void binary();

int main()
{
	binary();
	return 0;
} 
void binary()
{
	
	int i,j,k,d,flag=0,temp;
	cout<<"enter 5 element in the array :- ";
	for(i=1;i<=size;i++)
	cin>>a[i];
	d=a[2]-a[1];
	cout<<"c.d."<<d<<endl;
	for(i=1;i<=size;i++)
	{
		k=a[1]+(i-1)*d;
		cout<<"i="<<i<<"\t"<<"k="<<k<<endl;
		if(a[i]==k)
		{
			flag=1;
		}
		else
		{
			flag=0;
			j=i;
			temp=a[i];
			break;
		}
	}
	if(flag==0)
	{
		cout<<"array is not continuous"<<endl;
		cout<<"element at pos "<<j<<" = "<<temp<<" is different";
	}
	else
	cout<<"array is continuous.";
}
