#include <bits/stdc++.h>
using namespace std;

int power(int base,int n)
{
    int result=1;
    while(n)
    {
        if(n%2)     //n(power) is odd
       { result=result*base;
        n--;}
        else
        {
            base*=base;
            n/=2;
        }
    }
    return result;
}

int main() {

int n,base,c;
cin>>base>>n;
c=power(base,n);
cout<<c;






	return 0;
}