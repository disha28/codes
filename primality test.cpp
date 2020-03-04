#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
       return false;
    }
    return true;

}

int main() 
{

int n,i;
cin>>n;
isprime(n);
if (isprime(n))
cout<<"yes";
else 
cout<<"no";

	return 0;
}
