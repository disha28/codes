#include <bits/stdc++.h>
using namespace std;

int main() {

string s1,s2;
cin>>s1;
int c=0,i,j;
for(i=0;s1[i]!='|';i++)
{
    c++;
}
cin>>s2;
string p,q;
int left,right;
left=c;
right=s1.size()-c-1;
for(i=0;i<s2.size();i++)
{
    if(left<right)
    {
        p+=s2[i];
        left++;
    }
    else
    {
        q+=s2[i];
        right++;
    }
}
if(left==right)
{
    for(i=0;i<c;i++)
    cout<<s1[i];
    cout<<p<<"|";
    
    for(i=c+1;i<s1.size();i++)
    
        cout<<s1[i];
        cout<<q;
    
}
else
{
    cout<<"Impossible";
}	return 0;
}