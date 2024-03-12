class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        
        int positive=n-1;
        int negative=n-1;
        while(positive >=0 && negative >=0 ){
            while(arr[positive] < 0 && positive >=0){
                positive--;
            }
            while(arr[negative] > 0 && negative >=0){
                negative--;
            }
            if(positive >=0 && negative >=0){
                swap(arr[negative],arr[positive]);
            }
            positive--;
            negative--;
        } 
    }
};