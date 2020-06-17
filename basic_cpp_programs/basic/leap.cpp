#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"enter the year :- ";
	cin>>i;
	if((i%4==0)&&(i%400==0)||(i%100!=0))
	cout<<"it is a leap year";
	else 
	cout<<"it is not a leap year";
	return 0;
}
