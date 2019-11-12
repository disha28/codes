#include <bits/stdc++.h>
using namespace std;

int main() {

int n,i,j=1;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
while(j<=n)
{
for(i=0;i<n;i++)
{
  //  j=i+1;
    if(a[i]==j)
   { cout<<i+1<<" ";
    j++;}
}

}





	return 0;
}
