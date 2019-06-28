#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,d,m;// len=m,sum=d
    cin>>n;
    int s[n],sum=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>d;
    
    cin>>m;
    for(i=0;i<m;i++)
  {  sum=sum+s[i];}
  //cout<<sum<<"\n";
    if(sum==d)
    c++;
    
    for(i=m;i<n;i++)
    {
        sum=sum+s[i]-s[i-m];
       // cout<<sum<<"\n";
        if(sum==d)
        c++;
    }
    cout<<c;
    
        
    
    
    
	return 0;
}