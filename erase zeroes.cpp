#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int n,c=0;
    n=s.size();
    int i=0,j=n-1;
    while(i<=j)
    {
        if(s[i]=='1'&&s[j]=='1')
        {
            for(int k=i+1;k<j;k++)
            {
                if(s[k]=='0')
                c++;
            }break;
        }
        else if(s[i]=='1')
        j--;
        else if(s[j]=='1')
        i++;
        else
        {
            i++;
            j--;
        }
       
    }
     cout<<c<<"\n";
        
    
    

}
return 0;
}