#include<iostream>
using namespace std;
class person
{
	char name[20];
	int age;
	public:
		void getdata();
		void display();
};
void person::getdata()
{
	cout<<"enter name and age :"<<endl;
	cin>>name>>age;
}

void person::display()
{
	cout<<"entered name and age :"<<endl;
	cout<<name<<"\t"<<age;
}

int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}
