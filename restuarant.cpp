#include <bits/stdc++.h>
using namespace std;

int main() {
	
int t;
cin>>t;
while(t--)
{
    int l,b,x,y,i,c;
    cin>>l>>b;
    if(l==b)
    cout<<1<<endl;
    else
    {
        x=l*b;
        if(l<b)
        y=l;
        else
        y=b;
        for(i=y;i>=2;i--)
        {
            if((l%i==0)&&(b%i==0))
          {  c=x/(i*i);
          cout<<c<<endl;
              // cout<<(x/i*i)<<endl;
            break;
          }
        }
        
    }
}
	
	
	
	
	
	
	return 0;
}