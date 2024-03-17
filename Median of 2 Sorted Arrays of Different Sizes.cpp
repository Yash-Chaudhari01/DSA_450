//User function Template for C++

class Solution{
    public:
double MedianOfArrays(vector<int>& array1, vector<int>& array2)
{
    double size1 = array1.size();
    double size2 = array2.size();
    vector<int> ans;

    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (array1[i] < array2[j]) {
            ans.push_back(array1[i]);
            i++;
        } else {
            ans.push_back(array2[j]);
            j++;
        }
    }
    if (j < size2) {
        while (j < size2) {
            ans.push_back(array2[j]);
            j++;
        }
    }
    if (i < size1) {
        while (i < size1) {
            ans.push_back(array1[i]);
            i++;
        }
    }

    int len = ans.size();
    if (len % 2 == 0) {
        return (ans[len / 2 - 1] + ans[len / 2]) / 2.0;
    }
    return ans[len / 2];
}

};