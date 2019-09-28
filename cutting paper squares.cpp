#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m;
    long long int s;
    cin>>n>>m;
    if(n==1)
    cout<<m;
    else if(m==1)
    cout<<n;
    else
    {
        s=n*m-1;
        cout<<s;
    }
    
    
	return 0;
}