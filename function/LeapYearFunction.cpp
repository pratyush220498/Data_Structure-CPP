#include<iostream>
using namespace std;
int year(int);
int main()
{
	int i,j;
	cout<<"enter the year :- ";
	cin>>i;
	j=year(i);
	if(j==1)
	cout<<"it is a leep year";
	else
	cout<<"it is not a leep year";
	return 0;
}
int year(int i)
{
	if(i%400==0||(i%4==0)&&(i%100!=0))
	return 1;
	else
	return 0;
}
