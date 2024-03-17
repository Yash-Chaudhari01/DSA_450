class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<long long>left(n);
        left[0]=0;
        vector<long long>right(n);
        right[n-1]=0;
        
        long long left_max=arr[0];
        long long right_max=arr[n-1];
        
        for(long long i=1;i<n;i++){
            if(arr[i]>left_max){
                left[i]=left_max;
                left_max=arr[i];
            }else{
                left[i]=left_max;
            }
        }
        
        
        
        for(long long i=n-2;i>=0;i--){
            if(arr[i]>right_max){
                right[i]=right_max;
                right_max=arr[i];
            }else{
                right[i]=right_max;
            }
        }
        long long sol=0;
        for(long long i=0;i<n;i++){
    long long ans = max(0LL, min(left[i], right[i]) - arr[i]);
            sol+=ans;
        }
        return sol;
    } 



};