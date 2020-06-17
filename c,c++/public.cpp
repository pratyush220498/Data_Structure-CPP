#include<iostream>
#include<string.h>
using namespace std;
class base
{
	int a,b;
	int cal()
	{
		int x;
		x=a+b;
		return x;	
	}
	public:
		void read()
		{
			cin>>a>>b;
		}
		void show()
		{
			cout<<cal();
		}
};
class sub:public base
{
	int c,d;
	public:
		void print()
		{
			cin>>c>>d;
			cout<<c<<"\t"<<d<<endl;
		}
};
int main()
{
	sub s;
	s.print();
	s.read();
	s.show();
	return 0;
}
