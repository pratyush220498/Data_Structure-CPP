#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size :- ";
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
		cin>>a[i];
	int item;
	cout<<"enter item :- ";
	cin>>item;
	int f=0;
	int l=size-1;
	int flag=0;
	while(f<=l)
	{
		int mid=(f+l)/2;
		if(a[mid]==item)
		{
			flag=1;
			cout<<mid<<endl;
			break;	
		}
		else if(a[mid]>item)
			l=mid-1;
		else
			f=mid+1;	
	}
	if(flag==0)
		cout<<"not found";	
	return 0;
}
