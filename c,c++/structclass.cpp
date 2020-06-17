#include<iostream>
using namespace std;
struct name
{
	char first[40];
	char last[40];
};
struct phone
{
	char area[4];
	char num[4];
};
class precord
{
	name na;
	phone ph;
	public:
		void input()
		{
			cin>>na.first>>na.last>>ph.area>>ph.num;
		}
			void output()
		{
			cout<<na.first<<"\t"<<na.last<<"\t"<<ph.area<<"\t"<<ph.num;
		}
};
int main()
{
	precord p;
	p.input();
	p.output();
	return 0;
}
