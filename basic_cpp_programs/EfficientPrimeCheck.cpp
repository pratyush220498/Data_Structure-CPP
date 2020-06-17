#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,flag=0;
	cout<<"enter the no. : "<<endl;
	cin>>i;
	if(i==2)
	cout<<"it is the onnly even prime no. ";
	else if(i%2==0)
	cout<<"it is not a prime no. ";
	else
	{
	for(j=3;j<=sqrt(i);j=j+2)
	{
		if(i%j==0)
		{
		cout<<"it is not a prime no.  ";
		flag=1;
		break;
		}
	}
	if(flag==0)
	cout<<"it is a prime no. ";
	}
	return 0;
}
