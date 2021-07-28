#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define    lli       long long int
#define    mod       1e9+7
#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
int main() 
{
	int n;
	cin>>n;
	lli arr[n];
	for(lli i=0;i<n;i++)
		cin>>arr[i];
	for(lli i=n-1;i>=0;i--)
		cout<<arr[i]<<" ";
	/*
	12
	5 9 0 1 4 5 87 21 90 67 34 29
	
	output
	29 34 67 90 21 87 5 4 1 0 9 5
	*/
	return 0;
}

