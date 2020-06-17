#include<iostream>
using namespace std;
class Employee
{
	int id,sal;
	float hra,da,net;
	char name[20];
	void calculate()
	{
		hra=0.4*sal;
		da=0.6*sal;
		net=hra+da+sal;
	}
	public:
		void insert()
		{
			cin>>name>>id>>sal;
			calculate();
		}
		void print()
		{
			cout<<name<<"\t"<<id<<"\t"<<hra<<"\t"<<da<<"\t"<<net;
		}
};
int main()
{
	Employee emp;
	emp.insert();
	emp.print();
}
