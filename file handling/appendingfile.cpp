#include<bits/stdc++.h>
int main(int argc,char *argv[])
{
	FILE *fs,*ft;
	char ch,ch1[50];
	gets(ch1);
	fs=fopen(ch1,"a+");
	if(fs==NULL)
	{
		printf("error");
	}
	else
	{
		while((ch=fgetc(fs))!=EOF)
		printf("%c",ch);
		printf("\nEnter data to be inserted...\n");
		while((ch=getchar())!=EOF)
		fputc(ch,fs);
		fseek(fs,0,0);
		printf("\n After appendin data...\n ");
		while((ch=fgetc(fs))!=EOF)
		printf("%c",ch);		
	}
	fclose(fs);
	return 0;
}
