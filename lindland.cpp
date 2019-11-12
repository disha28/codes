#include <bits/stdc++.h>
using namespace std;

int main() {

int n,i,j=1,min,max;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}

for(i=0;i<n;i++)
{
    if(i==0)
   { min=a[i+1]-a[i];
    max=a[n-1]-a[0];
    cout<<min<<" "<<max<<"\n";
   }
else   if(i==n-1)
   {
       min=a[i]-a[i-1];
       max=a[i]-a[0];
       cout<<min<<" "<<max<<"\n";
      
   }
   else
   {
       if((a[i+1]-a[i])<(a[i]-a[i-1]))
       min=a[i+1]-a[i];
       else
       min=a[i]-a[i-1];
       if((a[n-1]-a[i])>(a[i]-a[0]))
       max=a[n-1]-a[i];
       else
       max=a[i]-a[0];
       cout<<min<<" "<<max<<"\n";
       
   }
   
   
}




	return 0;
}