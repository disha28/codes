#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,c=0,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]!=a[i+1])
	    c++;
	}
	cout<<c;
	
	
	return 0;
}