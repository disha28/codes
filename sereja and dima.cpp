#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,i,s=0,d=0,c=1,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	 if(n==1)
      s=s+a[0];
	
    for(i=0,j=n-1;i<n,j>0,i<j;)
  { 
     
     
      if(a[i]>a[j])
      {s=s+a[i];
      i++;
      }
      else
      {
          s=s+a[j];
          j--;
      }
     if(a[i]>a[j])
      {d=d+a[i];
      i++;
      }
      else
      {
          d=d+a[j];
          j--;
      }
       if(i==j)
      s=s+a[i];
      
  }	
	
  cout<<s<<" "<<d;
	return 0;
}