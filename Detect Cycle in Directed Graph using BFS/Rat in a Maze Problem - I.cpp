// User function template for C++



class Solution {
    bool IsSafe(int newX, int newY, vector<vector<bool>> &visited, vector<vector<int>> &m, int n) {
        if ((newX >= 0 && newX < n) && (newY >= 0 && newY < n) && (!visited[newX][newY]) && (m[newX][newY] == 1)) {
            return true;
        }
        return false;
    }

    void solve(int x, int y, vector<vector<int>> &m, int n, vector<string> &ans, string path, vector<vector<bool>> &visited) {
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[x][y] = true; // Marking the current cell as visited before exploring its neighbors

        // down
        if (IsSafe(x + 1, y, visited, m, n)) {
            solve(x + 1, y, m, n, ans, path + 'D', visited);
        }

        // left
        if (IsSafe(x, y - 1, visited, m, n)) {
            solve(x, y - 1, m, n, ans, path + 'L', visited);
        }

        // right
        if (IsSafe(x, y + 1, visited, m, n)) {
            solve(x, y + 1, m, n, ans, path + 'R', visited);
        }

        // up
        if (IsSafe(x - 1, y, visited, m, n)) {
            solve(x - 1, y, m, n, ans, path + 'U', visited);
        }

        visited[x][y] = false; // Unmarking the current cell as visited after exploring its neighbors
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        vector<string> ans;

        if (m[0][0] == 0) {
            return ans;
        }

        solve(0, 0, m, n, ans, "", visited);
        return ans;
    }
};

    