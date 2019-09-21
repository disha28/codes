#include <bits/stdc++.h>
using namespace std;

int main() {
	
		
	string s,res;
	int n,k,i,l,j=0;
	cin>>n>>k;
	s="abcdefghijklmnopqrstuvwxyz";
	if(n==k)
	{
		for(i=0;i<n;i++)
		{
			cout<<s[i];
		}
	}
	else
	
	{
		for(i=0;i<k;i++)
		{
			res=res+s[i];
		
		}
		//	cout<<res;
			
		l=res.size();
	//	cout<<l<<" ";
	
while(l!=n)
{
    res=res+res[j];
    j++;
    l=res.size();
}
	
	
cout<<res;	
}
	
	return 0;
}
