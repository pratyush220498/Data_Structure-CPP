#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	char ch[50];
	int base=1;
	int i=0;
	while(num>0)
	{
		int rem=num%16;
		if(rem<=9)
		{
			ch[i]=rem+48;
		}
		else
		{
			switch(rem)
			{
				case 10:
					ch[i]='A';
					break;
				case 11:
					ch[i]='B';
					break;
				case 12:
					ch[i]='C';
					break;
				case 13:
					ch[i]='D';
					break;
				case 14:
					ch[i]='E';
					break;
				case 15:
					ch[i]='F';
					break;	
			}
			
		}
		i++;
		num=num/16;
	}
	ch[i]='\0';
	i--;
	int k=0;
	char ch1[50];
	while(i>=0)
	{
		ch1[k]=ch[i];
		i--;
		k++;	
	}
	ch1[k]='\0';
	puts(ch1);
	return 0;
}
