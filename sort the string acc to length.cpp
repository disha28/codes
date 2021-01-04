#include <bits/stdc++.h>
using namespace std;

bool compare(string &s1,string &s2)
{
    return(s1.size()<s2.size());
    

}



int main() {
	
	string arr[] = {"name", "is", "disha", "my"}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
      
      sort(arr,arr+n,compare);
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
      //printarray(arr,n);
	return 0;
}