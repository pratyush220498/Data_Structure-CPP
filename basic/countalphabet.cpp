#include<iostream>
using namespace std;
int count(char ch[],int pos)
{
	int count1=0;
	for(int i=0;i<=pos-1;i++)
	{
		if(ch[i]==ch[pos])
		{
			count1++;	
		}	
	}
	return count1;
}
int main()
{
	int size,querry,pos;
	cin>>size;
	char str[size];
	cin>>str;
	cin>>querry;
	for(int i=0;i<querry;i++)
	{
		cin>>pos;
		cout<<count(str,pos-1);
		cout<<endl;
	}
	return 0;
}
