class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
       int low=0;
       int high=n-1;
       int mid=0;
       
       while(mid<=high){
           switch(a[mid]){
               case 0:
               {
                   swap(a[low++],a[mid++]);
                   break;
               }
               case 1:
               {
                  mid++;
                  break;
               }
               default :
               {
                   swap(a[mid],a[high--]);
                   break;
               }
           }
       }
    }
};