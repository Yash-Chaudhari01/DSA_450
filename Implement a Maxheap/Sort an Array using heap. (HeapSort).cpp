class Solution
{
    public:
    void heapify(int arr[], int n, int i)  
    {
        int largest = i;
        int left = largest*2+1;
        int right = largest*2+2;
        
        if(left < n && (arr[largest] < arr[left])){
            largest = left;
        }
        
        if(right<n && (arr[largest] < arr[right]))
        {
            largest = right;
        }
        
        if(largest != i)
        {
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }
    



    
    void buildHeap(int arr[], int n)  
    { 
         for(int i=(n-2)/2;i>=0;i--)
         heapify(arr,n,i);
    }

    
    
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
          for(int i=n-1;i>0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }
};
