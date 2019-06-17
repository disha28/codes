#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;

//lcm of an array


int gcd(int x,int y)
{
    if(y==0)
    return x;
    return gcd(y,x%y);
}

int  lcm(int a[],int n)
{
    long  ans=a[0];
    for(int i=1;i<n;i++)
    ans=((a[i]*ans)/(gcd(a[i],ans)));
    return ans;
    
}

int findgcd(int b[],int m)
{
 int result =b[0];
    for(int i=1;i<m;i++)
    result=gcd(b[i],result);
    return result;
}

int main() {
	int n,m,i,c=0;
	int p,q,r;
	cin>>n>>m;
	int a[n],b[m];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
	    cin>>b[i];
	}
	p=lcm(a,n);
//	cout<<p;
	q=findgcd(b,m);
//	cout<<q;
	r=p;

	int k=1;
	while(r<=q)
	{
	    r=p*k;
	    if(q%r==0)
	    c++;
	    k++;
	}
	cout<<c;
	
	
	return 0;
}