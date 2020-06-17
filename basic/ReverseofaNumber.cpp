#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number :- "<<endl;
	cin>>num;
	int flag=0;
	while(num>0)
	{
		int rem=num%10;
		flag=flag*10+rem;
		num=num/10;
	}
	cout<<flag;
		return 0;
}
