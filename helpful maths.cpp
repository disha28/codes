#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
char c;
int j=0,i,n;
vector<char> a;
cin>>s;
for(i=0;i<s.size();i++)
{
if(s[i]!='+')
{
    c=s[i];
 a.push_back(c);
    
}
}
sort(a.begin(),a.end());
n=a.size();
for(i=0;i<n-1;i++)

   { cout<<a[i]<<"+";
   }
   cout<<a[n-1];
    
    

return 0;
}