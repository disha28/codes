#include<bits/stdc++.h>
using namespace std;
struct pair
{
    int min;
    int max;
}

struct pair getminmax(int a[],int n)
{
    struct pair minmax;
    int i;
    if(n%2==0)
    {
        if(a[0]>a[1])
        {
            minmax.max=a[0];
            minmax.min=a[1];
            
        }
        
        else
        {
            minmax.max=a[1];
            minmax.min=a[0];
        }
        
        i=2;
    }
    
    else
    {
        minmax.min=a[0];
        minmax.max=a[0];

        i=1;
    }
    
    while(i<n-1)
    {
        if(a[i]>a[i+1])
        {
            if(a[i]>minmax.max)
            minmax.max=a[i];
            
            if(a[i+1]<minmax.min)
            minmax.min=a[i+1];
            
        }
        else
        {
            if(a[i+1]>minmax.max)
            minmax.max=a[i+1];
            
            if(a[i]<minmax.min)
            minmax.min=a[i];
        }
        
        i=i+2;
        
        
    }
    return minmax;

}


int main() 
{
 int arr[] = { 1000, 11, 445, 
                1, 330, 3000 }; 
    int arr_size = 6; 
     
    Pair minmax = getMinMax(arr, arr_size); 
     
    cout << "nMinimum element is "
        << minmax.min << endl; 
    cout << "nMaximum element is "
        << minmax.max; 


	return 0;
}