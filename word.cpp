#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	char ch;
	int n,i,j=0,c=0,t=0;
	cin>>s;
	n=s.size();
	for(i=0;i<n;i++)
	{
	    if(isupper(s[i]))
	    c++;
	    else if(islower(s[i]))
	    t++;
	}
//	cout<<c<<" "<<t;
	if(c>t)
	{
	while(s[j])
	{
	    ch = s[j]; 
        putchar(toupper(ch)); 
        j++; 
	}
	}
	else if(t>c)
	{
	while(s[j])
	{
	    ch = s[j]; 
        putchar(tolower(ch)); 
        j++; 
	}
	}
	if(c==t)
	while(s[j])
	{
	    ch = s[j]; 
        putchar(tolower(ch)); 
        j++; 
	}
	
	return 0;
}