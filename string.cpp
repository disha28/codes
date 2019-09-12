#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i=0,c,j;
	//string p;
	//int k,a;
	cin>>n;
	while(n>0)
	{
	  string s;
	  cin>>s;
	  c=s.size();
	  if(c>10)
	  {
	      j=c-2;
	      cout<<s[0]<<j<<s[c-1]<<"\n";
	  }
	  else 
	  cout<<s<<"\n";
	  n--;
	}


	
	return 0;
}