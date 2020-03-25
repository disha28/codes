#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main() {
    int q;
    cin>>q;
    while(q--)
    {
        int n,i,f=1;
        cin>>n>>i;
        f=f<<i;
        int ans=n & f;
        if(ans==0)
        cout<<"not set"<<endl;
        else
        cout<<"set"<<endl;
        
    }
	return 0;
}