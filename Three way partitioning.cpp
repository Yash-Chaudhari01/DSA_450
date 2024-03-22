//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        vector<int>temp;
        int size=array.size();
        int small=0;
        int big=size-1;
        vector<int>ans(size);
        for(int i=0;i<size;i++){
            if(array[i]<a){
                ans[small++]=array[i];
            }else if(array[i]>b){
                ans[big--]=array[i];
            }else{
                temp.push_back(array[i]);
            }
        }
        int count=0;
        for(int i=small;i<=big;i++){
            ans[i]=temp[count++];
        }
        
        for(int i=0;i<size;i++){
            array[i]=ans[i];
        }
    }
};