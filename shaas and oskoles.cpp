#include <bits/stdc++.h>
using namespace std;

	
int main() {
int n,m,i;
cin>>n;
int a[n];
for(i=1;i<=n;i++)
{
    cin>>a[i];
}
	cin>>m;
	while(m>0)
	{
	    int x,y,l=0,r=0;
	    cin>>x>>y;
	    for(i=1;i<=a[x];i++)
	    {
	        if(i<y)
	        l++;
	        else if(i>y)
	        r++;
	    }
	  //  cout<<l<<" "<<r<<"\n";
	    if((x-1)!=0)
	    a[x-1]=a[x-1]+l;
	    a[x]=a[x]-l;
	    if((x+1)<=n)
	    a[x+1]=a[x+1]+r;
	    a[x]=a[x]-r-1;
	    m--;
	}
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\n";
	return 0;
}