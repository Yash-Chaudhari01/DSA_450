//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> v;
        for(auto i: arr) {
            for(auto j: i) {
                pq.push(j);
            }
        }
        
        while(pq.empty() == false) {
            v.push_back(pq.top());
            pq.pop();
        }
        return v;

    }
};