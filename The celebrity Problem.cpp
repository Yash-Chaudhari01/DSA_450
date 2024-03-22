//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int count=0;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(M[i][j]==0)
                    {
                        count++;
                    }
                }
            }
            if(count==n-1)
            {
                count=0;
                for(int k=0;k<n;k++)
                {
                    if(k!=i)
                    {
                         if(M[k][i]==1)
                         {
                             count++;
                         }
                    }
                }
                if(count==n-1)
                {
                    return i;
                }
            }
        }
    return -1;
    }

};