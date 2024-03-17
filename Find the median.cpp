class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		     int n=v.size();
            int mid=n/2;
            int sum=0;
            sort(v.begin(),v.end());
            if(n%2==0)
            {
              sum+=(v[mid-1]+v[mid])/2;
              return floor(sum);
            }
            else
            {
                int mid=ceil(n/2);
                return v[mid];
            }


		}
};