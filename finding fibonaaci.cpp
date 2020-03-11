#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=1;i<=n;i++)
#define lli long long int
#define mod 1000000009
lli ar[3];
lli I[3][3],T[3][3];

void mul(lli A[3][3],lli B[3][3],int dim)
{
    lli res[dim+1][dim+1];
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            res[i][j]=0;
            for(int k=1;k<=dim;k++)
            {
          //  res[i][j]+=A[i][k]*B[k][j];
              lli x=(A[i][k]*B[k][j])% mod;
              res[i][j]=(res[i][j]+x)% mod;
            }
        }
    }
    REP(i,dim) REP(j,dim) A[i][j]=res[i][j];
}

lli getFib(lli n)
{
    if(n<=2)
    return ar[n];
    I[1][1]=I[2][2]=1;
    I[1][2]=I[2][1]=0; 
    
    T[1][1]=0;
    T[1][2]=T[2][1]=T[2][2]=1;
    n=n-1;
    
    
    while(n)
    {
        if(n%2)   //n is odd
        mul(I,T,2) , n--;
        else
        mul(T,T,2) ,n=n/2;
         
    }
    
lli Fn=(ar[1]*I[1][1]+ar[2]*I[2][1])%mod;
return Fn;
}

int main() 
{
int t;
cin>>t;
while(t--)
{
    lli n;
    
  cin>>ar[1]>>ar[2]>>n  ,n++;
  cout<<getFib(n)<<endl;
}
   
return 0;
}