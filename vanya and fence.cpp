#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,h,s=0;
	cin>>n>>h;
	int a[n],i;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	if(a[i]<=h)
	s=s+1;
	else
	s=s+2;
	}
	cout<<s;
	return 0;
}