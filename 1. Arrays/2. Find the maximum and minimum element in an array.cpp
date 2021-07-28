#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define    lli       long long int
#define    mod       1e9+7
#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
int main() 
{
	vector<lli> v;
	int size;
	cin>>size;
	lli item;
	for(int i=0;i<size;i++)
	{
		cin>>item;
		v.push_back(item);
	}
	cout<<"Max: "<<*max_element(v.begin(),v.end())<<endl;
	cout<<"Min: "<<*min_element(v.begin(),v.end());
	/*
7
23
45
67
87
90
32
45
Max: 90
Min: 23	
	*/
	return 0;
}


