#include <bits/stdc++.h>
using namespace std;

int main() {
int b,a,h;
cin>>b>>a;
h=(2*a)/b;
if((2*a)%b!=0)
h=h+1;
cout<<h;


return 0;
}