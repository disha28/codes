#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int a[100000];

int binarysearch(int low,int high,int key)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<key)
        low=mid+1;
        else if(a[mid]>key)
        high=mid-1;
        else
        return mid;
        
       
    }
    return -1;
}
int main() {

int n,i;
cin>>n;
//int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
    
}
int q;
cin>>q;
while(q--)
{
    int x,t;
    cin>>x;
    t=binarysearch(0,n,x);
    cout<<t+1<<endl;
}


	return 0;
}