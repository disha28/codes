#include <bits/stdc++.h>
using namespace std;
#define lli long long int  

int main() {

int t;
cin>>t;
while(t--)
{
    lli d,a,m,b,x;
    lli z,ans;
    cin>>d>>a>>m>>b>>x;
    x=x-d;
    z=a*m+b;
    ans=x/z;
    x=x-(z*ans);
    ans=ans*(m+1);
    ans+=ceil(x/(double) a);
    cout<<ans<<endl;
    
}






	return 0;
}