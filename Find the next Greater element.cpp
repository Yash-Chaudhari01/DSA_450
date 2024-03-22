class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
   vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    // Your code here
    stack<long long> stc;
long long temp=0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!stc.empty())
        {
            if (arr[i] < stc.top())
            {
                 temp=arr[i];
                arr[i] = stc.top();
                stc.push(temp);
            }
            else
            {
                while (!stc.empty())
                {
                    if (arr[i] < stc.top())
                    {
                        temp =arr[i];
                        arr[i] = stc.top();
                        stc.push(temp);
                        break;
                    }
                    else
                    {
                        stc.pop();
                    }
                }
                if(stc.empty()){
                    temp =arr[i];
                    arr[i]=-1;
                    stc.push(temp);
                }
                
            }
        }
        else
        {
            temp=arr[i];
            arr[i] = -1;
            stc.push(temp);
        }
    }
    return arr;
}
};