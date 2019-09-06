#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a,b,x,d,i,c=0;
	cin>>a>>b>>x>>d;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++)
	{
	    if(s[i]=='1')
	    c=c+a;
	    else if(s[i]=='2')
	    c=c+b;
	    else if(s[i]=='3')
	    c=c+x;
	    else if(s[i]=='4')
	    c=c+d;
	}
cout<<c;
	
	return 0;
}