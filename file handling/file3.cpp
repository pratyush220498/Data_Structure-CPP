#include<bits/stdc++.h>
using namespace std;
int main()
{
	FILE *fptr;
	char ch[100],c;
	printf("Enter file name. \n");
	gets(ch);
	fptr=fopen(ch,"r");
	if(fptr==NULL)
	{
		printf("error\n");
		exit(0);
	}
	else
	{
		int a=0,e=0,i=0,o=0,u=0;
		while((c=fgetc(fptr))!=EOF)
		{
			switch(c)
			{
				case 'a':;
				case 'A':
					a++;
					break;
				case 'e':;
				case 'E':
					e++;
					break;
				case 'i':;
				case 'I':
					i++;
					break;
				case 'o':;
				case 'O':
					o++;
					break;
				case 'u':;
				case 'U':
					u++;
					break;			
			}
		}
		int total=a+e+i+o+u;
		cout<<"a "<<a<<"e "<<e<<"i "<<" "<<i<<"o "<<o<<"u "<<u<<" "<<total;
	}
	return 0;	
}
