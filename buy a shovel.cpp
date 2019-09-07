#include <bits/stdc++.h>
using namespace std;

int main() {
	
int k,r,i,s;
cin>>k>>r;
for(i=1;i<=9;i++)
{
    if((k*i)%10==r)
   { s=i;
    break;}
  if ((k*i)%10==0)
    {s=i;
    break;}
}
cout<<s;
	return 0;
}