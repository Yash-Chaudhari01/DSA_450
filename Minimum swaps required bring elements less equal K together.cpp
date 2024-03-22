
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int wsize=0;
        int nonFav=0;
       
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                wsize++;
            }
        }
        int s=0;
        int e=wsize-1;
        for(int i=s;i<=e;i++){
            if(arr[i]>k){
                nonFav++;
            }
        }
        s++;
        e++;
        if(min>nonFav){
              min=nonFav;
            }
        while(e!=n){
            if(arr[s-1]>k){
                nonFav--;
            }
            if(arr[e]>k){
                nonFav++;
            }
            if(min>nonFav){
              min=nonFav;
            }
            s++;
            e++;
        }
        return min;
    }
};