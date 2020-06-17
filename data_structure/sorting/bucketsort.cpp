#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void bucketsort(float[],int);
int main()
{
	int i,size;
	cout<<"enter size :- ";
	cin>>size;
	float a[size];
	cout<<"enter elements :-"<<endl;
	for(i=0;i<=size-1;i++)		cin>>a[i];
	bucketsort(a,size);
	for(i=0;i<=size-1;i++)		cout<<a[i]<<"\t";
	return 0;
}
void bucketsort(float a[],int size)
{
	int arrindex;
	vector<float>bucket[size];
	for(int i=0;i<size;i++)
	{
		int index=size*a[i];
		bucket[index].push_back(a[i]);
	}
	for(int i=0;i<size;i++)
	sort(bucket[i].begin(),bucket[i].end());
	arrindex=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<bucket[i].size();j++)
		a[arrindex++]=bucket[i][j];
	}
}
