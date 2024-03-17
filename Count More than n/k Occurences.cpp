 Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        map<int,int>mp;
        int  boundry=n/k;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i=mp.begin(); i!= mp.end();i++){
            if(i->second >boundry){
                ans++;
            }
        }
        return ans;
    }
};