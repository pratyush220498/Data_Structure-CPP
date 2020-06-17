#include<bits/stdc++.h>
using namespace std;
int main()
{
	FILE *fptr;
	char ch1[100],ch;
	printf("Enter text file \n");
	gets(ch1);
	fptr=fopen(ch1,"r");
	if(fptr==NULL)
	{
		printf("Error");
		exit(0);
	}
	else
	{
		int count=0,space=0,line=1,word=0;
		int flag=0;
		while((ch=fgetc(fptr))!=EOF)
		{
			cout<<count<<" "<<line<<" "<<space<<" "<<word<<" "<<ch<<endl;
			++count;
			if(ch=='\n')
			{
				line++;
			}
			if(ch==' '||ch=='\n'||ch=='\t')
			{
				flag=0;
				space++;
			}					
			else if(flag==0)
			{
				flag=1;
				word++;	
			}	
		}
		cout<<count<<" "<<line<<" "<<space-line+1<<" "<<word<<endl;
	}
	return 0;
}
