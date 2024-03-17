    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        if(arr[0]==0) return true;
        int pre[n];
        pre[0]=arr[0];
        for(int i=1;i<n;++i){
            pre[i]=pre[i-1]+arr[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;++i){
            if(pre[i]==0) return true;
            else {
                if(!m[pre[i]]) m[pre[i]]++;
                else return true;
            }
        }
        return false;

    }