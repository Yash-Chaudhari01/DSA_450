{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
               vector<vector<int>>v;
        for(int i=0;i<row;i++)
        {
            vector<int>temp;
            for(int j=0;j<col;j++)
            {
                temp.push_back(M[i][j]);
            }
            auto it=find(v.begin(),v.end(),temp);
            if(it==v.end())
            {
                v.push_back(temp);
            }
        }
        return v;

    }
};