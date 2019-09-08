#include <bits/stdc++.h>
using namespace std;

int main() {
	int i=0,j=0;
	string s,t;
	cin>>s>>t;
	while((i<=s.size())&&(j<=t.size()))
	{
	if(t[j]==s[i])
	{j++;
	i++;}
	else
	j++;
	}
	cout<<i+1;
	
	return 0;
}