#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,m=21;
	char name[20];
	cout<<"enter your name :";
	gets(name);
	cout<<"hello ";
	puts(name);
	cout<<"i am computer ."<<endl;
	cout<<"lets play the game of matchsticks :-"<<endl;
	cout<<"rules are as follows :"<<endl;
	cout<<"their are 21 matchsticks ."<<endl;
	cout<<"you can pick 1 , 2 , 3 or 4 matchsticks ."<<endl;
	cout<<"who picks the last matchstick will loose the game ."<<endl;
	do
	{
		cout<<"no. of matchsticks : "<<m<<endl;
		for(i=1;i<=m;i++)
		cout<<"i"<<"\t";
		cout<<endl;
		puts(name);
		cout<<"your turn :"<<endl;
		cout<<"enter the no. of matchsticks you want to pick :";
		cin>>j;
		cout<<"now my turn :"<<endl;
		cout<<"the no. of match sticks i want to pick :";
		switch(j)
		{
			case 1:
				cout<<4<<endl;
				break;
			case 2:
				cout<<3<<endl;	
				break;
			case 3:
				cout<<2<<endl;
				break;
			case 4:
				cout<<1<<endl;
				break;		
		}
		m=m-5;
	}
	while(m>1);
	cout<<"now only 1 matchstick is left ."<<endl;
	puts(name);
	cout<<"you have to pick the last matchstick so yo lost the game ."<<endl;
	cout<<"better luck next time . ";
	return 0;
}
