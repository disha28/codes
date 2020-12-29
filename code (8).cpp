#include<bits/stdc++.h>
using namespace std;


void sort012(int arr[],int n)
{
 int c0=0,c1=0,c2=0,i;
 for(i=0;i<n;i++)
 {
     switch(arr[i])
     {
         case 0:
         c0++;
         break;
         
         case 1:
         c1++;
         break;
         
         case 2:
         c2++;
         break;
     }
 }
 i=0;
 while(c0>0)
 {
     arr[i++]=0;
     c0--;
 }
 
while(c1>0)
 {
     arr[i++]=1;
     c1--;
 }
while(c2>0)
 {
     arr[i++]=2;
     c2--;
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