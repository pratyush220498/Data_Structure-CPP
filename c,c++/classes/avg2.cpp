#include<iostream>
using namespace std;
class Avg
{
	int i,j,k,l;
	public:
		void getdata();
		int average();
		void display();
};
void Avg::getdata()
{
	cout<<"enter three numbers :- ";
	cin>>i>>j>>k;
}
int Avg::average()
{
	return(i+j+k)/3;
}
void Avg::display()
{
	l=average();
	cout<<"average = "<<l;
}
int main()
{
	Avg a;
	a.getdata();
	a.display();
	return 0;
}
