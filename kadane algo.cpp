//kadane algorithm

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(maxsum<sum)
        maxsum=sum;
        if(sum<0)
        sum=0;
    }
    return maxsum;
    

