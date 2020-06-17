#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char ch;
	do
	{
	cout<<"enter ur choice :";
	cin>>i;
	switch(i)
	{
		case 1:
			cout<<"i am in 1";
			break;
		case 2:
			cout<<"i am in 3";
			break;
		case 3:
		    cout<<"i am in 3";
			break;
		case 4:
			exit(-1);
		default :
			cout<<"i am in default";			
	}
	cout<<"do u want to continue";
		cin>>ch;
}
while(ch=='y');
	cout<<"gn";
	return 0;
}
