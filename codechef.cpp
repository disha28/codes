#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,x=0,s;
	int a,b;
//	string x="";
	cin>>t;
	while(t>0)
	{
	    cin>>a>>b;
	    s=a+b;
	  //  cout<<s<<"\n";
	    while (s != 0) {
	        t=s%10;
	    //    cout<<t<<"\n";
	        if(t==0)
	        x=x+6;
	       else if(t==1)
	        x=x+2;
	        else if(t==2)
	        x=x+5;
	        else if(t==3)
	        x=x+5;
	        else if(t==4)
	        x=x+4;
	        else if(t==5)
	        x=x+5;
	        else if(t==6)
	        x=x+6;
	        else if(t==7)
	        x=x+3;
	        else if(t==8)
	        x=x+7;
	        else if(t==9)
	        x=x+6;
	     s = s / 10; 
        //c++; 
    } 
    t--;
    cout<<x<<"\n";
	    
	}
	
	
	
	
	return 0;
}