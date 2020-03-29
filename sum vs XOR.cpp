#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int findMSB(lli n)
{
    lli f=1;
    for(int i=55;i>=0;i--)
    {
        if((n&(f<<i)))
        return i;
    }
    return 0;
}
int main() {

lli n;  
lli res=1;
cin>>n;
int msb=findMSB(n);
int cnt=0;
for(int i=0;i<msb;i++)
{
    lli f=1;
    if((n & (f<<i))==0)
    cnt++;
    
}
lli f=1;
cout<<(f<<cnt);





	return 0;
}