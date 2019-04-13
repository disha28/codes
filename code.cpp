
#include<bits/stdc++.h>
using namespace std;
int climb(int n)
{ int y;
    if(n==0||n==1)
    return 1;
    if(n==2)
    return 2;
    y=climb(n-1)+climb(n-2)+climb(n-3);
    return y;
}

int main() {
    int n,t;
    cin>>n;
    t=climb(n);
    cout<<t;
  
	
}