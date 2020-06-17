#include<iostream>
using namespace std;
class A
{
	int i,j;
	public:
		void getdata();
		int greatest();
		void display();
};
void A::getdata()
{
	cout<<"enter two number :-"<<endl;
	cin>>i>>j;
}
int A::greatest()
{
	if(i>j)
	return i;
	else 
	return j;
}
void A::display()
{
	int m;
	cout<<"greatest number is :- "<<endl;
	m=greatest();
	cout<<m<<endl;
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
