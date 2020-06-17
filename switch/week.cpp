#include<iostream>
using namespace std;
int main()
{
	int i;
	char ch;
	do
	{
	cout<<"enter ur choice from 1-7 :-";
	cin>>i;
	switch(i)
	{
		case 1:
	    		cout<<"sunday";
	    		break;
	    case 2:
	    		cout<<"monday";
	    		break;
		case 3:
	    		cout<<"tuesday";
	    		break;
		case 4:
	    		cout<<"wednesday";
	    		break;
		case 5:
	    		cout<<"thursday";
	    		break;
		case 6:
	    		cout<<"friday";
	    		break;
		case 7:
	    		cout<<"saturday";
	    		break;
	}
	cout<<"enter ur choice :-";
	cin>>ch;
}
while(ch=='y'||ch=='Y');
	return 0;
}
