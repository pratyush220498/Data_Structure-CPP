#include<iostream>
using namespace std;
class details
{
	char name[20];
	int i;
	public:
		void getdata();
		void display();
};
void details::getdata()
{
	cout<<"enter name , age "<<endl;
	cin>>name>>i;
}
void details::display()
{
	cout<<"entered name , age and no. "<<endl;
	cout<<name<<"\t"<<i<<endl;
}
int main()
{
	details a,b;
	a.getdata();
	b.getdata();
	a.display();
	b.display();
	return 0;
}
