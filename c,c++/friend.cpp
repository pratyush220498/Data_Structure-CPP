#include<iostream>
using namespace std;
class xyz;
class abc
{
	int a;
	public:
		void get(int i)
		{
			a=i;
		}
		void display(int b);
	friend void cmp(abc,xyz);	
};
void abc::display(int b)
{
	cout<<b;
}
class xyz
{
	int x;
	public:
		void get(int j)
		{
			x=j;
		}
		void display(int c);
	friend void cmp(abc,xyz);	
};
void xyz::display(int c)
{
	cout<<c;
}
void cmp(abc p,xyz q)
{
	if(p.a>q.x)
	{
		cout<<p.a;
		p.display(p.a);
	}
	else
	{
		cout<<q.x;
		q.display(q.x)
	}
}
int main()
{
	abc k;
	xyz l;
	k.get(5);
	l.get(2);
	cmp(k,l);
	return 0;
}
