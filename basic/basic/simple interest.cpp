#include<iostream>
using namespace std;
int main()
{
	float P,R,T,S;
	cout<<"enter principle =";
	cin>>P;
	cout<<"enter rate =";
	cin>>R;
	cout<<"enter time =";
	cin>>T;
	S=(P*R*T)/100;
	cout<<"S.I.="<<S;
	return 0;
}
