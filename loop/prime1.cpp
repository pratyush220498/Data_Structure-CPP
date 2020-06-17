#include<iostream>
using namespace std;
int main()
{
	int i,n,f;
	for(n=2;;n++)
	{
		f=1;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				f=0;
				break;
			}
		}
	
		if(f==1)
			cout<<n<<"\t";
	}
	return 0;
}
