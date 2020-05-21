#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;

int main() {
	
int n,k,q;
cin>>n>>k>>q;
if(k>n)
k=k%n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int b[n];
for(int i=0;i<n;i++)
{
    b[(i+k)%n]=a[i];
}
while(q--)
{
    int m;
    cin>>m;
    cout<<b[m]<<endl;
}
	
	
	
	return 0;
}