#include <bits/stdc++.h>
using namespace std;
int main() {
int n,t,k,d;

int c=0;
cin>>n>>t>>k>>d;
while(c<=d)
{
	n=n-k;
	c=c+t;
}
if(n>0)
cout<<"YES";
else
cout<<"NO";





	return 0;
}