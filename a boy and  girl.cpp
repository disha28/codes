#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n,i,j;
	cin>>s;
	n=s.size();
	int a[n],c=0;
	for(i=0;i<n;i++)
	{
	    a[i]=1;
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
	   if(s[i]==s[j])
	   a[i]++;
	}
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==1)
	    c++;
	}
	if(c%2!=0)
	cout<<"IGNORE HIM!";
	else
	cout<<"CHAT WITH HER!";
	return 0;
}