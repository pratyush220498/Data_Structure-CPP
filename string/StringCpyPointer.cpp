#include<iostream>
using namespace std;
char * cpyStr(char *,char *); 
int main()
{
	char ch[50],ch1[50];
	cout<<"Enter String ";
	gets(ch);
	char *iptr=cpyStr(ch,ch1);
	cout<<"Final String"<<endl;
	while(*iptr!='\0')
	{
		cout<<*iptr;
		*iptr++;
	}
	puts(ch1);
}
char * cpyStr(char *str1,char *str2)
{
	char *iptr=str2;
	while(*str1!='\0')
	{
		*iptr=*str1;
		*str1++;
		*iptr++;
	}
	return str2;
}
