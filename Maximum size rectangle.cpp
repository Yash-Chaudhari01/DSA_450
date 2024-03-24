/*You are required to complete this method*/

class Solution{
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
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        long long temp[m];
        for(int i=0;i<m;i++){
            temp[i]=M[0][i];
        }
       long long area= getMaxArea(temp,m);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j] !=0){
                    M[i][j]=M[i][j]+M[i-1][j];
                    temp[j]=M[i][j];
                }else{
                    M[i][j]=0;
                    temp[j]=M[i][j];
                }
            }
                     long long temmp=getMaxArea(temp,m);
                        area=max(area,temmp);
        }
        return area;
        
    }
};