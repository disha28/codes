#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long int l,s1,s2,i,d,t;
	long int q;
	cin>>l>>s1>>s2;
	cin>>t;
	while(t--)
	{
	    long long int q,x;
	    double y,b;
	    cin>>q;
	    x=abs(s2-s1);
	    y=l*sqrt(2)-sqrt(2*q);
	    b=y/x;
	    cout<<setprecision(10)<<fixed;
	    cout<<b<<endl;
	    
	    
	    
	}
	
	
	
	
	return 0;
}