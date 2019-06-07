#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z,max,min;
	//int a[3];
	cin>>x>>y>>z;
	if(x>y)
	{
	max=x;
	min=y;
	}
	else
	{
	max=y;
	min=x;}
//	a[0]=x;
	//a[1]=y;
//	a[2]=z;
//	b=max_element(0,3);
//	c=*b;
	if(z==0)
	{
	    if(x>y)
	    cout<<"+";
	    else if(x<y)
	    cout<<"-";
	    else 
	    cout<<"0";
	   }

	   if(z>0)
	   {
	       if(y==0)
	       {
	         if(x>z)
	         cout<<"+";
	         else if(z>x||z==x)
	         cout<<"?";
	       }
	       else if(x==0)
	       {
	           if(y>z)
	           cout<<"-";
	           else if(y<z||z==y)
	           cout<<"?";
	       }
	      else if(z<max-min)
	       {
	          
	           if(max==x)
	           cout<<"+";
	           else
	           cout<<"-";
	       }
	           else
	           cout<<"?";
	       
	       
	   }

	   
	return 0;
}