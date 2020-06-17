#include<iostream>
using namespace std;
class Operations
{
	int i,j,k,m,l,n,h;
	public:
		void getdata();
		int add();
		int sub();
		int mul();
		int div();
		int mod();
		void display();
};
void Operations::getdata()
{
	cout<<"enter two no. := ";
	cin>>i>>j;
}
int Operations::add()
{
	return(i+j);
}
int Operations::mul()
{
	return(i*j);
}
int Operations::sub()
{
	return(i-j);
}
int Operations::div()
{
	return(i/j);
}
int Operations::mod()
{
	return(i%j);
}
void Operations::display()
{
		k=add();
	cout<<"addition = "<<k<<endl;
		l=sub();
	cout<<"substraction = "<<l<<endl;
		m=mul();
	cout<<"multiplication = "<<m<<endl;
		n=div();
	cout<<"division = "<<n<<endl;
		h=mod();
	cout<<"modulus = "<<h<<endl;	
}
int main()
{
	Operations o;
	o.getdata();
	o.display();
	return 0;
}
