#include <bits/stdc++.h>
using namespace std;

int main() {
	
string s;
cin>>s;
int r=0,diff,i,flag=97;
for(i=0;i<s.size();i++)
{
    diff=abs(flag-s[i]);
    if(diff>13)
    diff=26-diff;
    r=r+diff;
    flag=s[i];
}
	cout<<r;
	return 0;
}