    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
        int s1 = 0, s2 = 0, s3 = 0;
        map<int, int> mp;
        vector<int> ans;
        
        while (s1 < n1 && s2 < n2 && s3 < n3) {
            if (A[s1] == B[s2] && B[s2] == C[s3]) {
                // Insert the common element into the map
                mp[A[s1]]++;
                s1++;
                s2++;
                s3++;
            } else if (A[s1] <= B[s2] && A[s1] <= C[s3]) {
                s1++;
            } else if (B[s2] <= A[s1] && B[s2] <= C[s3]) {
                s2++;
            } else if (C[s3] <= A[s1] && C[s3] <= B[s2]) {
                s3++;
            }
        }
        
        // Copy keys from the map to the result vector
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->first);
        }
        
        return ans;
    }