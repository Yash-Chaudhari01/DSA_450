class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
   long long getMaxArea(long long arr[], int n) {
    stack<int> s;
    vector<int> left(n), right(n);
    
    // Finding nearest smaller element on the left
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        left[i] = (s.empty()) ? -1 : s.top();
        s.push(i);
    }
    
    // Clearing the stack for next use
    while (!s.empty()) {
        s.pop();
    }
    
    // Finding nearest smaller element on the right
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        right[i] = (s.empty()) ? n : s.top();
        s.push(i);
    }
    
    // Finding maximum area
    long long maxArea = 0;
    for (int i = 0; i < n; ++i) {
        long long area = (right[i] - left[i] - 1) * arr[i];
        maxArea = max(maxArea, area);
    }
    
    return maxArea;
}
};