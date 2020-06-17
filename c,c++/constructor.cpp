#include<iostream>
#include<string.h>
using namespace std;
class test
{
	int code;
	char sub[20];
	public:
		test()
		{
			code=542;
			strcpy(sub,"english");
		}
		test(int code1,char sub1[20])
		{
			code=code1;
			strcpy(sub,sub1);
		}
		test(test&t)
		{
			code=t.code;
			strcpy(sub,t.sub);
		}
		void output()
		{
			cout<<code<<"\t"<<sub<<endl;
		}
};
int main()
{
	test t1;
	test t2(205,"maths");
	test t3(t2);
	t1.output();
	t2.output();
	t3.output();
	return 0;
}
