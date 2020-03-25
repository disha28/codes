#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main() {
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int cnt=0;
        while(n>0)
        {
        if((n & 1)>0)
        cnt++;
         
         n=n>>1;
        }
        cout<<cnt<<endl;
        
    }
	return 0;
}