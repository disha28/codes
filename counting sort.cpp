#include<bits/stdc++.h>
using namespace std;


void countsort(int arr[],int n)
{
  int  k=6;
    int count[7];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<k+1;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int b[n];
    
    for(int i=n-1;i>=0;i--)
    {
        b[--count[arr[i]]]=arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=b[i];
    }
    
}
int main() 
{
int arr[]={0,0,2,3,1,4,2,4,5};
countsort(arr,9);
for(int i=0;i<9;i++)
{
    cout<<arr[i]<<" ";
}

 
 




	return 0;
}