#include<iostream>
using namespace std;
int main()
{
	char a[50],b[50];
	cout<<"enter String :- ";
	gets(a);
	int i=0,j=0,k=0;
	int temp1,temp2;
	while(a[i]!='\0')
	{
		i++;
	}
	cout<<i<<" "<<a[i]<<endl;
	while(j<i)
	{
		temp1=a[j];
		temp2=a[j+1];
		if((temp1==32&&temp2!=32)||temp1!=32)
		{
			b[k]=a[j];
			k++;
		}
		j++;
	}
	b[k]='\0';
	puts(b);
}
