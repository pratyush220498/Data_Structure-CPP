#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int  main()
{
	FILE *fp;
	char ch[20];
	gets(ch);
	fp=fopen(ch,"r");
	if(fp==NULL)
	{
		cout<<"error";
	}
	else
	{
		char c;
		while((c=fgetc(fp))!=EOF)
		printf("%c",c);
	}
	return 0;
}
