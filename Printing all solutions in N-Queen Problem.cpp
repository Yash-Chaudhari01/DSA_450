// User function Template for C++

class Solution {
public:
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> result;
        vector<int> placement(n);       
        
        vector<bool> used(n, false);
        solveNQueens(0, n, placement, used, result);
        return result;
    }

private:
    void solveNQueens(int col, int n, vector<int>& placement, vector<bool>& used, vector<vector<int>>& result) {
        if (col == n) {
            result.push_back(placement);
            return;
        }

        for (int row = 0; row < n; ++row) {
            if (!used[row] && isValid(row, col, placement)) {
                placement[col] = row + 1; 
                used[row] = true;
                solveNQueens(col + 1, n, placement, used, result);
                used[row] = false;
            }
        }
    }

    bool isValid(int row, int col, vector<int>& placement) {
        for (int prevCol = 0; prevCol < col; ++prevCol) {
            int prevRow = placement[prevCol] - 1; 
            
            if (abs(prevRow - row) == abs(prevCol - col)) {
                return false;
            }
        }
        return true;
    }
};

