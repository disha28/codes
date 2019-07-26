#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,p,i,right,left;
	cin>>n>>p;
	int total=n/2;
	right=p/2;
	left=total-right;
	if(right < left)
	cout<<right;
	else
	cout<<left;
	
	
	
	
	
	
	
	
	
	
	return 0;
}