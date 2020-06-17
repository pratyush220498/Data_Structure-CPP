#include<iostream>
using namespace std;
int cpyStr(char *); 
int main()
{
	char ch[50];
	cout<<"Enter String ";
	gets(ch);
	int i=cpyStr(ch);
	cout<<i;
	return 0;
}
int cpyStr(char *str1)
{
	int i=0;
	while(*str1!='\0')
	{
		i++;
		*str1++;
	}
	return i;
}
