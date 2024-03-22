class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         sort(intervals.begin(),intervals.end());
         vector<vector<int>>ans;
         int size=intervals.size();
         for(int i=0;i<size;i++){
             if(ans.empty()){
                 ans.push_back(intervals[i]);
             }else{
                 vector<int>&temp=ans.back();
                 int val=temp[1];
                 if(intervals[i][0]<=val){
                     temp[1]=max(intervals[i][1],val);
                 }else{
                     ans.push_back(intervals[i]);
                 }
             }
         }
         return ans;
    }
};