#include <bits/stdc++.h>
#define REP(i,n) for(int i=1;i<=n;i++)
#define lli long long int
#define pb push_back
#define vi vector<int>
#define ff first
#define ss second
using namespace std;
int ar[1000001];
int pp[1000001];
void sieve()
{
    int maxN=1000000;
    REP(i,maxN) 
    ar[i]=1;
    ar[0],ar[1]=0;
    for(lli i=2;i*i<=maxN;i++)
    {
        if(ar[i]==1)
        {
            for(lli j=i*i;j<=maxN;j=j+i)
            ar[j]=0;
        }
    }
    int c=0;
    REP(i,maxN)
    {
    if(ar[i]==1)
    c++;
    
    if(ar[c]==1)
   pp[i]=1;
    else 
    pp[i]=0;
    }
    REP(i,maxN)
    pp[i]=pp[i]+pp[i-1];
}
int main() {
sieve();
int t,l,r;
cin>>t;
while(t--)
{
   // int l,r;
    cin>>l>>r;
   int s=pp[r]-pp[l-1];
   cout<<s<<endl;
    
    
   
}	
return 0;
}