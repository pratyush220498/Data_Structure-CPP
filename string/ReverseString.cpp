#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i=0,k=0,j=0,l,m;
	char s1[20],s2[20];
	cout<<"enter the string :- ";
	gets(s1);
	while(s1[i]!='\0')
	{
		k++;
		i++;
	}
	cout<<"legth of string is = "<<k<<endl;
	i=0;
	k--;
	while(k>=0)
	{
		s2[i]=s1[k];
		i++;
		k--;
	}
	puts(s2);
	return 0;
}
