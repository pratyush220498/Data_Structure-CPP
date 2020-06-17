#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i=0,j,k;
	char s[20];
	cout<<"enter the string :- ";
	gets(s);
	while(s[i]!='\0')
	{
		if((s[i]>='a')&&(s[i]<='z'))
		{s[i]=s[i]-32;}
		else if((s[i]>='A')&&(s[i]<='Z'))
		{s[i]=s[i]+32;}
		i++;
	}
	puts(s);
	
	return 0;
}
