#include<bits/stdc++.h>
using namespace std;
int get(map<long long int,long long int> bottlemap)
{
	int max=INT_MIN;
	for(map<long long int,long long int>::iterator itr=bottlemap.begin();itr!=bottlemap.end();itr++)
	{
		if(itr->second>max)
			max=itr->second;
	}
	return max;
}
int main()
{
	long long int size;
	cin>>size;
	long long int bottlenum[size];
	for(int i=0;i<size;i++)
	{
		cin>>bottlenum[i];
	}
	map<long long int,long long int> bottlemap;
	for(long long int i=0;i<size;i++)
	{
		if(bottlemap.find(bottlenum[i])==bottlemap.end())
			bottlemap[bottlenum[i]]=1;
		else
			bottlemap[bottlenum[i]]++;	
	}
	int count=get(bottlemap);
	cout<<count<<endl;
	return 0;
}
