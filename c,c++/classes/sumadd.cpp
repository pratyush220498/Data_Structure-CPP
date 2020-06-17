#include<iostream>
using namespace std;
class details
{
	int i;
	public:
		void getdata();
		void display(details);
	void sum(details,details);
};
void details::getdata()
{
	cout<<"enter age "<<endl;
	cin>>i;
}
void details::sum(details a,details b)
{
	int sum=0;
	sum=a.i+b.i;
	cout<<sum;
}
void details::display(details c)
{
	cout<<" sum="<<c.i;
}
int main()
{
	details a,b,c,d;
	a.getdata();
	b.getdata();
	c.sum(a,b);
	d.display(c);
	return 0;
}
