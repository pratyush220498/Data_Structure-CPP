#include<iostream>
using namespace std;
class a;
class x
{
	int i;
	public:
		void get(int p)
		{
			i=p;
		}
		void display()
		{
			cout<<"x="<<i<<" ";
		}
		friend void exchange(a &,x &);
};
class a
{
	int j;
	public:
		void get(int q)
		{
			j=q;
		}
		void display()
		{
			cout<<"y="<<j<<" ";
		}
		friend void exchange(a &,x &);
};
void exchange(a & m,x & n)
{
	int temp;
	temp=m.j;
	m.j=n.i;
	n.i=temp;
}
int main()
{
	a abc;
	abc.get(5);
	x xyz;
	xyz.get(2);
	abc.display();
	xyz.display();
	exchange(abc,xyz);
	abc.display();
	xyz.display();
	return 0;
}
