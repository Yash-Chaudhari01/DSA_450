class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxProduct = INT_MIN;
	    long long product=1;
	    for(int i=0;i<n;i++){
	        product*=arr[i];
	        maxProduct=max(product,maxProduct);
	        if(arr[i]==0){
	            product=1;
	        }
	        
	        
	    }
	    product=1;
	    
	    for(int i=n-1;i>=0;i--){
	        product*=arr[i];
	         maxProduct=max(product,maxProduct);
	        if(arr[i]==0){
	            product=1;
	        }
	       
	        
	    }
	    return maxProduct;
	}
};