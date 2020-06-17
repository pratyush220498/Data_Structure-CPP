#include<bits/stdc++.h>
int main(int argc,char *argv[])
{
	FILE *fs,*ft;
	char ch;
	if(argc!=3)
	{
		puts("insufficient arguments");
		exit(0);
	}
	
	fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		puts("Cannot open source file.");
		exit(0);
	}
	
	ft=fopen(argv[2],"w");
	if(ft==NULL)
	{
		puts("Cannot open source file.");
		fclose(ft);
		exit(0);
	}
	while((ch=fgetc(fs))!=EOF)
	{
		fputc(ch,ft);
	}
	fclose(ft);
	fclose(fs);
	return 0;
}
