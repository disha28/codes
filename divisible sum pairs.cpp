#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,k;
	cin>>n>>k;
	int ar[n],i,j,c=0;
	for(i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	sort(ar,ar+n);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if((ar[i]+ar[j])%k==0)
	        c++;
	    }
	}
	cout<<c;
	return 0;
}