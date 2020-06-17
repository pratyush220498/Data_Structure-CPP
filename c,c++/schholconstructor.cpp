#include<iostream>
#include<string.h>
using namespace std;
class school
{
	char name[20],city[20];
	int num;
	public:
		school()
		{
			strcpy(name,"pratyush");
			strcpy(city,"indore");
		}
		school(char name1[20],char city1[20])
		{
			strcpy(name,name1);
			strcpy(city,city1);
		}
		school(school&s)
		{
			strcpy(name,s.name);
			strcpy(city,s.city);
		}
		void output()
		{
			cout<<name<<"\t"<<city<<endl;
		}
};
int main()
{
	school l1;
	school l2("kanika","bhopal");
	school l3(l2);
	l1.output();
	l2.output();
	l3.output();
	return 0;
}
