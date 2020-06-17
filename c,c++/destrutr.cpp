#include<iostream>
#include<string.h>
using namespace std;
class rest
{
	int code;
	char food[20],ftype[20],stckr[20];
	void getstckr()
	{
		if(strcmp(ftype,"vegeterian")==0)
		strcpy(stckr,"green");
		else if(strcmp(ftype,"nonvegeterian")==0)
		strcpy(stckr,"red");
		else
		strcpy(stckr,"yellow");
	}
	public:
		rest()
		{
			cout<<"default constructor is called";
			code=0;
			strcpy(ftype,"not assigned");
			strcpy(stckr,"not assigned");
		}
		~rest()
		{
			cout<<"destructor is called";
		}
		void getfood()
		{
			cin>>code>>food>>ftype;
			getstckr();
		}
		void showfood()
		{
			cout<<code<<"\t"<<food<<"\t"<<ftype<<"\t"<<stckr<<endl;
		}
};
int main()
{
	rest r2;
	r2.getfood();
	r2.showfood();
	r2.~rest();
}
