#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,cnt[102]={},pairs=0 ;
	cin>>n;
	int ar[102];
	for(i=0;i<n;i++)
	{
	    cin>>ar[i];
	    cnt[ar[i]]++;
	}
	for(i=0;i<101;i++)
	{
	   if(cnt[i]!=0)
	   pairs+=cnt[i]/2;
	   
	}
	cout<<pairs<<endl;
	return 0;
}