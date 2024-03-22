//User function template for C++
class Solution{
public:	
int matSearch(vector<vector<int>> &mat, int N, int M, int X) {
    int i = 0, j = M - 1; // Start from the top-right corner of the matrix
    while (i < N && j >= 0) { // Continue until we are within the bounds of the matrix
        if (mat[i][j] == X)
            return 1; // Element found
        else if (mat[i][j] > X)
            j--; // Move left in the current row
        else
            i++; // Move down to the next row
    }
    return 0; // Element not found
}


};