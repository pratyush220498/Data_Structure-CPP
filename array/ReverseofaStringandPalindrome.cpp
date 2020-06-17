#include<iostream>
using namespace std;
int main()
{
	char ch1[25],ch2[25];
	cout<<"enter String :- ";
	gets(ch1);
	int i=0;
	while(ch1[i]!='\0')
	{
		i++;
	}
	i--;
	int k=0;
	while(ch1[k]!='\0')
	{
		ch2[i]=ch1[k];
		cout<<ch1[k]<<" "<<ch2[i]<<endl;
		k++;
		i--;
	}
	puts(ch1);
	puts(ch2);
	int flag=0;
	for(int i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]!=ch2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"palindrome";
	else
		cout<<"not palindrome";	
}
