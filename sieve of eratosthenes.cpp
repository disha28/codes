#include <bits/stdc++.h>
using namespace std;                                  // sieve of eratosthenes

int main() {                                        //1 prime nos
                                                    //0 composite no
int is_prime[1000001]
void sieve()
{
    int maxN=1000000;
    for(int i=1;i<maxN;i++)
    is_prime[i]=1;
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i*i<=maxN;i++)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=maxN;j+=i)
            is_prime[j]=0;
        }
    }
}









	return 0;
}