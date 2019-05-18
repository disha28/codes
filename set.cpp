#include <bits/stdc++.h>
using namespace std;

int main() {
	int q,i;
	int x,y;   //y-type  x-integer
	set< int >s;
	cin>>q;
	for(i=0;i<q;i++)
	{
	    cin>>y>>x;
	    if(y==1)
	    {
	        s.insert(x);
	    }
	    else if(y==2)
	    {
	        s.erase(x);
	        
	    }
	    else
	    {
	       set<int>::iterator w=s.find(x);
	       if(w!=s.end())
	       cout<<"yes"<<endl;
	       else
	       cout<<"no"<<endl;
	    }
	}
	return 0;
}