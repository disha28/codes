#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main() {

int l,r,i;
cin>>l>>r;
for(i=l;i<=r;i++)
if (isprime(i))
cout<<i<<" ";




	return 0;
}