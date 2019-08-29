#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int a[n][3],i,j,c=0;
	for(i=0;i<n;i++)
	{
	for(j=0;j<3;j++)
	{
	    cin>>a[i][j];
	}
	}
	
	 for(i=0;i<n;i++) 
	   {int s=0;
	  for(j=0;j<3;j++)
	    {
	        s=s+a[i][j];
	    }
	    if(s>=2)
	    c++;
	    
	}
	cout<<c;
	return 0;
}