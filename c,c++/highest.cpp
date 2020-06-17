#include<iostream>
#include<string.h>
using namespace std;
class number
{
	int marks[5];
	char name[5][20];
	void highest()
	{
		int high=0,pos=0;
		for(int i=0;i<5;i++)
		{
			if(marks[i]>high)
			{
				high=marks[i];
				pos=i;
			}
		}
		cout<<"highest"<<"\t"<<name[pos]<<"\t"<<marks[pos];
	}
	public:
		void input()
		{
			for(int i=0;i<5;i++)
			{
				cin>>name[i]>>marks[i];
			}
			highest();
		}
};
int main()
{
	number num;
	num.input();
	return 0;
}
