#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int l=0,r=0,x=0;
	    int flag=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        x=x+a[i];
	       while(x>s)
	       {
	           x=x-a[l];
	           l++;
	       }
	       
	        if(x==s)
	       { cout<<l+1<<" "<<i+1;
	       cout<<endl;
	        flag=1;
	           
	       }
	       if(flag==1)
	       break;
	    }
	    	if(flag==0)
	cout<<"-1";
	    
	}

	return 0;
}