
#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{//int s=0;
    if(n<=0)
    return 0;
    return sum(a,n-1)+a[n-1];
}


	int main()
	
	{ 
	    int n,i,t;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    t=sum(a,n);
	    cout<<t;
	
	
	
	//return 0;
}