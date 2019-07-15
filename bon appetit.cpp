#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,t;
    cin>>n>>k;
    int bill[n],i,b,s=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>bill[i];
    }
    cin>>b;
    for(i=0;i<n;i++)
    {
        if(i==k)
        c=1;
        else 
        s=s+bill[i];
    }
    t=s/2;
    if(b==t)
    cout<<"Bon Appetit";
    else 
    cout<<(b-t);
    
	return 0;
}