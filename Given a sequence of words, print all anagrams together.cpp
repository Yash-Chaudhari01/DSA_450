
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
         unordered_map<string,vector<string>>m;
        for(int i=0;i<s.size();i++)
        {
            string p=s[i];
            sort(p.begin(),p.end());
            m[p].push_back(s[i]);
        }
        vector<vector<string>>res;
        
        for(auto it:m)
        {
            res.push_back(it.second);
        }
        
        return res;

    }