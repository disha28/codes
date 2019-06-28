#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0,k=0;
	cin>>n;
	int s[n],i,j,score,h_score,l_score;
	for(i=0;i<n;i++)
	{
	    cin>>s[i];
	}
	h_score=s[0];
	l_score=s[0];
	
	for(i=1;i<n;i++)
	{
	   if(s[i]>h_score)
	   {
	       h_score=s[i];
	       c++;
	   }
	   if(s[i]<l_score)
	   {
	   l_score=s[i];
	   k++;
	}
	
	}
	cout<<c<<" "<<k;
	return 0;
}
