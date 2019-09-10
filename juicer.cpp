#include <bits/stdc++.h>
using namespace std;
int main() {
int n,b,d,s=0,t=0,i;
cin>>n>>b>>d;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}

for(i=0;i<n;i++)
{
    if(a[i]<=b)
    {
        s+=a[i];
    }
    if(s>d)
    {
        t=t+1;
        s=0;
    }
}

cout<<t;

	return 0;
}