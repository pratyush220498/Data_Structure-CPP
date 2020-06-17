#include<iostream>
using namespace std;
class A
{
	int i,j;
	public:
		void getdata();
		void display();
};
void A::getdata()
{
	cout<<"enter number and cost :-";
	cin>>i>>j;
}
void A::display()
{
	cout<<"entered number and cost :-";
	cout<<i<<endl;
	cout<<j<<endl;
}
int main()
{
	A l,m,n;
	l.getdata();
	m.getdata();
	n.getdata();
	l.display();
	m.display();
	n.display();
	return 0;
}
