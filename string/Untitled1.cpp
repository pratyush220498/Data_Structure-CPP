#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i=0,k=0,j=0,l,m,flag;
	char s1[20],s2[20];
	cout<<"enter the string :- ";
	gets(s1);
	while(s1[i]!='\0')
	{
		k++;
		i++;
	}
	cout<<"legth of string is = "<<k<<endl;
	i=0;
	l=k;
	while(s1[i]!='\0')
	{
		s2[l]=s1[i];
		cout<<l<<" s2= "<<s2[l]<<endl;
		i++;
		l--;
	}
	for(l=1;l<=k;l++)
	cout<<s2[l];
	cout<<endl;
	for(l=0,m=1;l<k,m<=k;l++,m++)
	{
		flag=0;
		if(s1[l]==s2[m])
		{
			continue;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"it is palindrome string .";
	else
	cout<<"it is not palindrome string .";
	return 0;
}
