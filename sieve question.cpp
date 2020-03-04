#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
vi primes;
bool ar[90000001];
void sieve()                                                 //false--prime
                                                              // true--not prime 
{
    int maxN=90000000;
    ar[0]=ar[1]=true;
    for(int i=2;i*i<=maxN;i++)
    {
        if(!ar[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
            ar[j]=true;
        }
    }
    
    for(int i=2;i<=maxN;i++)
    if(!ar[i])
    primes.push_back(i);
}

int main() {

int q,n;
cin>>q;
sieve();
while(q--)
{cin>>n;
cout<<primes[n-1]<<endl;}


	return 0;
}