#include<iostream>
using namespace std;
int main()
{
	char ch[50];
	gets(ch);
	int len=0;
	while(ch[len]!='\0')
		len++;
	int i=0;
	int temp=0,sum=0;
	while(ch[i]!='\0')
	{
		if(ch[i]>='a'&&ch[i]<='f')
			temp=ch[i]-87;
		else if(ch[i]>='A'&&ch[i]<='F')
			temp=ch[i]-55;
		else if(ch[i]>='0'&&ch[i]<='9')
			temp=ch[i]-48;
		int flag=1;
			for(int k=1;k<=len-i-1;k++)
				flag=flag*16;
		sum=sum+(flag*temp);			
		i++;				
	}
	cout<<sum;	
}
