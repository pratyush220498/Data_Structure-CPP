#include<bits/stdc++.h>
using namespace std;
int main()
{
	FILE *fptr;
	char ch[100],c;
	printf("enter file name\n");
	gets(ch);
	fptr=fopen(ch,"w");
	printf("Please insert data.\n");
	while((c=getchar())!='a')
	{
		fputc(c,fptr);
	}
	fclose(fptr);
	fptr=fopen(ch,"r");
	while((c=fgetc(fptr))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fptr);
	return 0;
}
