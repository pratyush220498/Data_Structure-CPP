#include<iostream>
#include<stdlib.h>
using namespace std;
struct complex
{
	float real;
};
struct complex add(struct complex c1,struct complex c2)
{
	struct complex c3;
	c3.real=c1.real+c2.real;
	return c3;
}
int main()
{
	struct complex c1,c2,c3;
	cin>>c1.real>>c2.real;
	c3=add(c1,c2);
	cout<<c3.real;
	return 0;
}
