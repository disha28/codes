#include <bits/stdc++.h>
using namespace std;

int main() {
     int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int i,t;
    unsigned long long int n;
    cin>>t;
    while(t>0)
        {
    cin>>n;
        if(n<2)
            cout<<0<<endl;
        else
   {unsigned long long int s=a[0];
            for(i=1;i<25;i++)
       { s=s*a[i];
        if(n<s)
        break; 
       }
    
    cout<<i<<endl;}
       
        t--;
    }
    return 0;
	
}