#include<iostream>
#include<string.h>
using namespace std;
class cloth
{
	char code[20],type[20],material[20];
	int size;
	float price;
	void callprice()
	{
		if(strcmp(material,"cotton")==0)
		{
			if(strcmp(type,"trouser")==0)
			price=1500;
			else
			price=1200;
		}
		else
		{
			if(strcmp(type,"trouser")==0)
			price=1500-((1500/100)*25);
			else
			price=1200-((1200/100)*25);
		}
	}
	public:
		cloth()
		{
			cout<<"constructor is called"<<endl;
			strcpy(code,"not asigned");
			strcpy(type,"not asigned");
			strcpy(material,"not asigned");
			size=0;
			price=0;
		}
		~cloth()
		{
			cout<<"destructor is called"<<endl;
		}
		void enter()
		{
			cin>>code>>type>>size>>material;
			callprice();
		}
		void show()
		{
			cout<<code<<"\t"<<type<<"\t"<<size<<"\t"<<material<<"\t"<<price<<endl;
		}
};
int main()
{
	cloth c1;
	c1.show();
	c1.enter();
	c1.show();
}
