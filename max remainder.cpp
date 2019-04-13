#include<bits/stdc++.h>
using namespace std;

int main() {
	long int N,i,max,a;
	int flag=0;
	cin>>N;
	if(N>=2&&N<=pow(10,5))
	{
	long int c[N];
	for(i=0;i<N;i++)
	{
	    //if(c[i]>=1&&c[i]<=pow(10,9))
	    cin>>c[i];
	}
	sort(c,c+N);
	max=c[N-1];
	for(i=N-1;i>=0;i--)
	{
	    if(c[i]<max)
	   { a=c[i];
	    flag=1;
	    break;
	    	}}
	if(flag==1)
	cout<<a;
	else 
	cout<<"0";
	
	return 0;
}}