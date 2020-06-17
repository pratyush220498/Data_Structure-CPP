#include<iostream>
#include<string.h>
using namespace std;
class test
{
	int code,num,center;
	char ds[20];
	void callcntr()
	{
		center=num/100+1;
	}
	public:
		test()
		{
			code=0;
			strcpy(ds,"NULL");
			num=0;
			center=0;
		}
		test(int code1,int num1,char ds1[20])
		{
			code=code1;
			num=num1;
			strcpy(ds,ds1);
			callcntr();	
		}
		~test()
		{
			cout<<"destructor is called.";
		}
		void schedule()
		{
			cin>>code>>num>>ds;
			callcntr();
		}
		void display()
		{
			cout<<code<<"\t"<<num<<"\t"<<ds<<"\t"<<center<<endl;
		}
};
int main()
{
	test t2;
	test t1(4,5,"NULL");
	t1.display();
	t2.schedule();
	t2.display();
	
}
