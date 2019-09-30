#include <bits/stdc++.h>
using namespace std;

int main() {

long int r,c,start,ans;
cin>>r>>c;
if(r%2==0)
{
    start=10*((r-2)/2)+1;
    ans=start+(2*(c-1));
    cout<<ans;
    
}
else
{
    start=10*(r-1)/2;
    ans=start+(2*(c-1));
    cout<<ans;
}


	
	
	return 0;
}