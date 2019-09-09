#include <bits/stdc++.h>
using namespace std;

	int gcd(int a,int b)
	{
	    if(b==0)
	    return a;
	    return gcd(b,a%b);
	}
int main() {
	int y,w,max,i,j=0;
	vector<int> a;
	int x,n,d,m=6;
	cin>>y>>w;
	if(y>w)
	max=y;
	else
	max=w;
//	cout<<max<<"\n";
	
	for(i=1;i<=6;i++)
	{
	    if(i>=max)
	    {
	        a.push_back(i);
	        //j++;
	    }
	}
	x=a.size();
	//cout<<x<<"\n";
	m=gcd(x,m);
	n=x/m;
//	cout<<m<<"\n";
	d=6/m;
	cout<<n<<"/"<<d;

	
	
	return 0;
}