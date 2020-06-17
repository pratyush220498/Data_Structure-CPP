#include<iostream>
using namespace std;
struct add
{
	char house[20];
	char street[20];
	char city[20];
};
struct dob
{
	int dd,mm,yy;
};
struct student
{
	char name[20];
	add a;
	dob d;
};
class child
{
	student st[5];
	public:
		void input()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"i="<<i<<endl;
				cin>>st[i].name>>st[i].a.house>>st[i].a.street>>st[i].a.city>>st[i].d.dd>>st[i].d.mm>>st[i].d.yy;
			}
		}
		void outut()
		{
			for(int i=0;i<5;i++)
			{
				cout<<st[i].name[i]<<st[i].a.house<<st[i].a.street<<st[i].a.city<<st[i].d.dd<<st[i].d.mm<<st[i].d.yy;
			}
		}
};
int main()
{
	child a;
	a.input();
	a.outut();
	return 0;
}
