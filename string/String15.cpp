#include<iostream>
#include<string.h>
using namespace std;
void insertStr(char [],char []);
void deleteStr(char []);
void replaceStr(char []);
int main()
{
	char ch1;	
	do
	{
		char ch[50];
		cin.ignore();
		cout<<"enter first String :- "<<endl;
		gets(ch);
		int i;
		cout<<"1.insert a substring 2.delete a substring 3.replace a character";
		cout<<"enter your Operation :- "<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				char str2[50];
				cin.ignore();
				cout<<"enter String to be inserted :- ";
				gets(str2);
				insertStr(ch,str2);
				break;
			case 2:
				deleteStr(ch);
				break;
			case 3:
				replaceStr(ch);
				break;
			default:
				cout<<"you have entered wrong choice. "<<endl;			
		}
		cout<<"do u want to continue :-";
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	return 0;
}
void insertStr(char str1[],char str2[])
{
	char str3[50];
	int pos;
	cout<<"enter position :- "<<endl;
	cin>>pos;
	int i=0;
	int k=0;
	while(i<=pos-1)
	{
		str3[k]=str1[i];
		i++;
		k++;
	}
	int l=i;
	int j=0;
	while(str2[j]!='\0')
	{
		str3[k]=str2[j];
		k++;
		j++;
	}
	while(str1[l]!='\0')
	{
		str3[k]=str1[l];
		k++;
		l++;
	}
	str3[k]='\0';
	cout<<"final String."<<endl;
	puts(str3);	
}
void deleteStr(char str1[])
{
	int pos,size;
	char str3[100];
	cout<<"enter position :- "<<endl;
	cin>>pos;
	cout<<"enter size :- "<<endl;
	cin>>size;
	int i=0;
	int k=0;
	while(i<pos-1)
	{
		str3[k]=str1[i];
		i++;
		k++;
	}
	int j=0;
	while(j<size)
	{
		i++;
		j++;
	}
	while(str1[i]!='\0')
	{
		str3[k]=str1[i];
		k++;
		i++;
	}
	str3[k]='\0';
	cout<<"Final String :- "<<endl;
	puts(str3);	
}
void replaceStr(char ch[])
{
	int i;
	char ch1;
	cout<<"enter position :- "<<endl;
	cin>>i;
	cout<<"enter characte :- "<<endl;
	cin>>ch1;
	ch[i-1]=ch1;
	puts(ch);
}
