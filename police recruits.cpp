#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	//scanf("%d",&n);
	cin>>n;
	int i,c=0,t=0;
while(n--)

{
    int v;
    //scanf("%d",&v);
   cin>>v;
    if(v>0)
    {
        c=c+v;
    }
    else if(v<0)
    {
        if(c>0)
        c--;
        else
        t++;    }
    
}
//printf("%d",t);
cout<<t;
	
	return 0;
}