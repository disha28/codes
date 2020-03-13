#include <bits/stdc++.h>
using namespace std;
int a[10000],n;
int binarysearch(int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==a[mid]&&x!=a[mid+1])
        {
            return mid+1;
            break;
        }
        else if(x<a[mid])
        high=mid-1;
        else 
        low=mid+1;
    }
    if(x<a[low]&&x>a[high])
    return high+1;
    
    if(x>a[n-1])
        return n;
        
        
}

int main() {

int i;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int q;
cin>>q;
while(q--)
{
  int pow;
  cin>>pow;
 int res= binarysearch(pow);
     int s=0;

 for(i=0;i<res;i++)
 s+=a[i];
 
 cout<<res<<" "<<s<<endl;
}
	return 0;
}