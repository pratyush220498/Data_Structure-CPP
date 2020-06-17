#include<iostream>
using namespace std;
int main()
{
	int date1,mnth1,yr1,i,date,mnth,yr,date2,mnth2,yr2,sum=0;
	char ch;
	do
	{
		cout<<"enter date month and year "<<endl;
	cin>>date1>>mnth1>>yr1;
	cout<<"enter date month and year "<<endl;
	cin>>date2>>mnth2>>yr2;
	if(yr1==yr2)
	{
		sum=0;
		cout<<"same yrs"<<endl;
		for(i=mnth1+1;i<=mnth2-1;i++)
		{
			cout<<i<<endl;
			if((i%2!=0&&i<=7)||i==8||i==10||i==12)
			{
				sum=sum+31;
			}
			else if(i==2)
			{
				if(yr1%400==0||(yr%4==0&&yr%100!=0))
				sum=sum+29;
				else
				sum=sum+28;
			}
			else
			sum=sum+30;
		}
		if(mnth1==1,3,5,7,8,10,12)
		{
			int day1=31-date1;
			sum=sum+day1;
		}
		else if(mnth1!=2)
		{
			int day1=30-date1;
			sum=sum+day1;
		}
		else
		{
			if(yr1%400==0||(yr1%4==0&&yr1%100!=0))
			sum=sum+29-date1;
			else
			sum=sum+28-date1;
		}
		int j=1;
		for(i=1;i<date2;i++)
		{
			sum=sum+j;
		}
	}
	if(yr1!=yr2)
	{
		sum=0;
		yr=yr2-yr1;
		cout<<"diff. yrs"<<endl;
			if(yr==1)
			{	
				for(i=mnth1+1;i<=12;i++)
				{
					cout<<i<<endl;
					if((i%2!=0&&i<=7)||i==8||i==10||i==12)
					sum=sum+31;
					else if(i==2)
					{
						if(yr1%400==0||(yr1%4==0&&yr1%100!=0))
						sum=sum+29;
						else
						sum=sum+28;
					}
					else
					sum=sum+30;
					cout<<"sum="<<sum<<endl;
				}
				for(i=1;i<mnth2;i++)
				{	
					if((i%2!=0&&i<=7)||i==8||i==10||i==12)
					sum=sum+31;
					else if(i==2)
					{
						if(yr2%400==0||(yr2%4==0&&yr2%100!=0))
							sum=sum+29;
						else
							sum=sum+28;
					}
					else
						sum=sum+30;
				}
					if(mnth1==1,3,5,7,8,10,12)
					{
						int day1=31-date1;
						sum=sum+day1;
					}
					else if(mnth1!=2)
					{
						int day1=30-date1;
						sum=sum+day1;
					}
					else
					{
						if(yr1%400==0||(yr1%4==0&&yr1%100!=0))
						sum=sum+29-date1;
						else
						sum=sum+28-date1;
					}
					int j=1;
				for(i=1;i<date2;i++)
				{
					sum=sum+j;
				}
			}
			else
			{
				for(i=yr1+1;i<yr2;i++)
				{
					if(i%400==0||(i%4==0&&i%100!=0))
					sum=sum+366;
					else
					sum=sum+365;
				}
				for(i=mnth1+1;i<=12;i++)
				{
					cout<<i<<endl;
					if((i%2!=0&&i<=7)||i==8||i==10||i==12)
					sum=sum+31;
					else if(i==2)
					{
						if(yr1%400==0||(yr1%4==0&&yr1%100!=0))
						sum=sum+29;
						else
						sum=sum+28;
					}
					else
					sum=sum+30;
					cout<<"sum="<<sum<<endl;
				}
					for(i=1;i<mnth2;i++)
					{	
						if((i%2!=0&&i<=7)||i==8||i==10||i==12)
						sum=sum+31;
						else if(i==2)
						{
							if(yr2%400==0||(yr2%4==0&&yr2%100!=0))
								sum=sum+29;
							else
								sum=sum+28;
						}
						else
							sum=sum+30;
					}
					if(mnth1==1,3,5,7,8,10,12)
					{
						int day1=31-date1;
						sum=sum+day1;
					}
					else if(mnth1!=2)
					{
						int day1=30-date1;
						sum=sum+day1;
					}
					else
					{
						if(yr1%400==0||(yr1%4==0&&yr1%100!=0))
						sum=sum+29-date1;
						else
						sum=sum+28-date1;
					}
					int j=1;
					for(i=1;i<date2;i++)
					{
						sum=sum+j;
					}
			}	
	}
	cout<<"no. of days :-"<<sum<<endl;
	cout<<"do u want to continure :-";
	cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	return 0;
}
