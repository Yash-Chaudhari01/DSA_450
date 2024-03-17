class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.\]
     bool binarySearch(int start,int end,int A[],int key){
    while(start<end){
              int sum =A[start]+A[end];
              if(sum == key){
                  return true;
              }else if(sum <key){
                  start++;
              }else{
                  end--;
              }
          }
          return false;
    }
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        int ans=0;
        for(int i=0;i<n;i++){
            int find=X-A[i];
            bool response=binarySearch(i+1,n-1,A,find);
            if(response){
                return 1;
            }
        }
        
        return 0;
    }

};