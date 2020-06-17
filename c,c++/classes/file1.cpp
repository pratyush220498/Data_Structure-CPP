#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	ofstream outfile("random.txt");
	if(outfile.is_open())
	{
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=10;j++)
			{
				int x=(rand()+1)%100;
				outfile<<x<<" ";
				cout<<x<<" ";	
			}
			cout<<endl;
		}
	}
	else
	cout<<"enable to open the file";
	return 0;
}
