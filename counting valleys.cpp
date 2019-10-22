#include <bits/stdc++.h>
using namespace std;

int main() {

int n,i,v=0,lvl=0;
cin>>n;
string s;
cin>>s;
for(i=0;i<n;i++)
{
    if(s[i]=='U')
    lvl++;
    if(s[i]=='D')
    lvl--;
    if(lvl==0&&s[i]=='U')
    v++;
}
cout<<v;





	return 0;
}