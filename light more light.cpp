#include <bits/stdc++.h>
using namespace std;

int main() {

int n,i;
do
{cin>>n;
    if(n!=0)
    {int c=0;
    for(i=1;i<=(sqrt(n));i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            c++;
            else
            c=c+2;
        }
    }
  //  cout<<c<<"\n";
    
    if(c%2!=0)
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
    }
}while(n!=0);




	return 0;
}