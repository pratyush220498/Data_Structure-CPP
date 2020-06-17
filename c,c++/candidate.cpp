#include<iostream>
#include<string.h>
using namespace std;
class candidate
{
	int roll,score;
	char name[20],rem[20];
	void assign(int score)
	{
		if(score>=50)
			strcpy(rem,"selected");
		else if(score<50)
			strcpy(rem," not selected");
	}
	public:
		void insert()
		{
			cin>>name>>roll>>score;
			assign(score);
		}
		void print()
		{
			cout<<name<<"\t"<<roll<<"\t"<<score<<"\t"<<rem;
		}
};
int main()
{
	candidate card;
	card.insert();
	card.print();
	return 0;
	
}
