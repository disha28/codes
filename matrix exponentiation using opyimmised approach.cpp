#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=1;i<=n;i++)
#define N 101
int ar[N][N],I[N][N];
void mul(int A[][N],int B[][N],int dim)
{
    int res[dim +1][dim+1];
    REP(i,dim) 
    {
        REP(j,dim)
    {
        res[i][j]=0;
        REP(k,dim) res[i][j]+=A[i][k]*B[k][j];
    }
    
    }
    REP(i,dim) REP(j,dim)
    A[i][j]=res[i][j];
    
}
void power(int A[][N],int dim,int n)
{
    REP(i,dim) REP(j,dim)
    {
        if(i==j)
        I[i][j]=1;
        else
        I[i][j]=0;
    }
    while(n)
    {
        if(n%2)
        mul(I,A,dim) n--;      //I=I*A
        else
        mul(A,A,dim) n=n/2;   //A=A*A
    }
  //  REP(i,n)
  // mul(I,A,dim);
  
    REP(i,dim) REP(j,dim)
    A[i][j]=I[i][j];
}
void printMat(int A[][N],int dim)
{
    REP(i,dim)
    {
        REP(j,dim)
        
            cout<<A[i][j]<<" ";
            cout<<endl;
        
    }
}

int main() {
    int t,dim,n;
    cin>>t;
    while(t--)
    {
        cin>>dim>>n;
        REP(i,dim) REP(j,dim) cin>>ar[i][j];
        
        
        
        power(ar,dim,n);
        printMat(ar,dim);
    }
	return 0;
}