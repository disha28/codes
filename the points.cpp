#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int p1,p2,q1,q2,r1,r2;
while(n>0)
{
    cin>>p1>>p2>>q1>>q2;
    r1=2*q1-p1;
    r2=2*q2-p2;
    cout<<r1<<" "<<r2<<"\n";
    n--;
}
	return 0;
}