#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q,i,j,x;
	cin>>n;
	vector< int >v;
	for(i=0;i<n;i++)
	{
	    cin>>x;
	    v.push_back(x);
	}
	cin>>q;
	int val;
	vector<int>::iterator w;

	for(i=0;i<q;i++)
	{
	    cin>>val;
	    w=lower_bound(v.begin(),v.end(),val);
	    if(v[w-v.begin()]==val)
	    cout<<"Yes"<<" "<<(w-v.begin()+1)<<endl;
	    else
	    cout<<"No"<<" "<<(w-v.begin()+1)<<endl;
	}
	
	
	return 0;
}