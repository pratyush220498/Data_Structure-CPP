#include<iostream>
using namespace std;
int main()
{
	int num,m,l,digit,i=3,j=1,k;
	int a[10];
	cout<<"enter number of digit :-"<<endl;
	cin>>m;
	cout<<"enter number :- "<<endl;
	cin>>num;
	while(num>0)
	{
		digit=num%10;
		a[j]=digit;
		num=num/10;
		j++;
	}
	while(m>0)
	{
		i=m;
		switch(i)
		{
			case 1:
				cout<<a[i]<<" "<<"units"<<" ";
				break;
			case 2:
				cout<<a[i]<<" "<<"tens"<<" ";
				break;
			case 3:
				cout<<a[i]<<" "<<"hundreds"<<" ";
				break;
			case 4:
				cout<<a[i]<<" "<<"thousand"<<" ";
				break;
			case 5:
				cout<<a[i]<<" "<<"ten thousand"<<" ";
				break;
			case 6:
				cout<<a[i]<<" "<<"lakh"<<" ";
				break;
			case 7:
				cout<<a[i]<<" "<<"ten lakh"<<" ";
				break;
			case 8:
				cout<<a[i]<<" "<<"crore"<<" ";
				break;
			case 9:
				cout<<a[i]<<" "<<"ten crore"<<" ";
				break;
		}
		m--;
	}
	return 0;
}
