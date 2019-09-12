#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i=0,c=0,j;
	string s;

	set<char> t;
	set<char>::iterator it; 
	getline(cin,s);
	//	cout<<s;
	n=s.size();
//	cout<<n<<"\n";
	for(i=0;i<n;i++)
	{
	    if(s[i]!=' '&&s[i]!=','&&s[i]!='{'&&s[i]!='}')
	  {  t.insert(s[i]);
	    }
	    
	}
	
	cout<<t.size();
	 //for (it= t.begin(); it!=t.end();  ++it) 
       // cout << *it << " "; 
	
	
	return 0;
}