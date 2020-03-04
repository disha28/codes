#include <bits/stdc++.h>
using namespace std;                                   //prime factorization in o(sqrt(n))
void primefact(int n)
{
    for(int i=2;i*i<n;i++)
    if(n%i==0)
    {
        int c=0;
        while(n%i==0)
        c++,n=n/i;
        cout<<i<<"^"<<c<<endl;
    }
    if(n>1)
    cout<<n<<"^"<<1<<endl;
}
int main() {                                        
int n;
cin>>n;
primefact(n);
	return 0;
}