#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,x;
	cin>>n>>x;
	long long int i,d,k=0;
	char c;
	
//while(n>0)
for(i=0;i<n;i++)
{ cin>>c>>d;
  //  m=x;
    if(c=='+')
    x=x+d;
    if(c=='-')
    {
        if(x>=d)
        x=x-d;
        else
        k++;
        
    }
   // n--;
}
cout<<x<<" "<<k;
	
	return 0;
}