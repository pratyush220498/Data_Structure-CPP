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
		void display(abc);
	friend void cmp(abc,xyz);	
};
void abc::display(abc p)
{
	cout<<p.a;
}
class xyz
{
	int x;
	public:
		void get(int j)
		{
			x=j;
		}
		void display(xyz);
	friend void cmp(abc,xyz);	
};
void xyz::display(xyz c)
{
	cout<<c.x;
}
void cmp(abc p,xyz q)
{
	if(p.a>q.x)
	{
		cout<<p.a;
		p.display(p);
	}
	else
	{
		cout<<q.x;
		q.display(q);
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
