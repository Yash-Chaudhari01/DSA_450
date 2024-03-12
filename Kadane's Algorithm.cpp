class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxi= INT_MIN;
        long long sum =0;
        for(long long i=0;i<n;i++){
            sum =sum +arr[i];
            
            if(sum >maxi){
                maxi=sum;
            }
            if(sum<0){
                sum =0;
            }
        }
        return maxi;
    }
};