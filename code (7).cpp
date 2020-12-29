#include<bits/stdc++.h>
using namespace std;


void sort012(int arr[],int n)
{
 int lo=0,mid=0,hi=n-1;
 
 while(mid<=hi)
 {
     switch(arr[mid])
     {
         case 0:
         swap(arr[lo++],arr[mid++]);
         break;
         
         case 1:
         mid++;
         break;
         
         case 2:
         swap(arr[mid],arr[hi--]);
         break;
     }
 }
    
}
int main() 
{
int arr[]={0,0,1,2,1,2,0,2,1,0,1};
int s;
s=sizeof(arr)/sizeof(arr[0]);
sort012(arr,s);
for(int i=0;i<s;i++)
{
    cout<<arr[i]<<" ";
}

 
 




	return 0;
}