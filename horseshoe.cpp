#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,x=1;
	cin>>a>>b>>c>>d;
	if(a!=b&&a!=c&&a!=d)
	x++;
	if(b!=c&&b!=d)
	x++;
	if(c!=d)
	x++;
	cout<<4-x;
	
	return 0;
}