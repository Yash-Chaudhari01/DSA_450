class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int>s;
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      int maxi=INT_MIN;
      for(int i=0;i<N;i++){
         int curr=arr[i];
         int pre=curr-1;
         int count=0;
         if(s.find(pre) == s.end()){
             while(s.find(curr) != s.end()){
                 count++;
                 curr++;
             }
             maxi=max(count,maxi);
         }
      }
      return maxi;
    }
};