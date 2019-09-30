#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,i,max=0,t=0,j=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
	        int x=i,s=0;
	        while(x!=0)
	        {
	            s=s+x%10;
	            x=x/10;
	        }
	        if(s>max)
	        {
	           max=s;
	           t=i;
	        }
	        if(s==max)
	        {
	            if(i<t)
	            t=i;
	        }
	        
	    }
	    
	    
	}cout<<t;

	
	
	return 0;
}