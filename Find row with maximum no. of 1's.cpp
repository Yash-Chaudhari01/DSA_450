//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int flag=0;
	    int j=0, max=-1,curr=0,count=0, row_no=0;
	    for(int i=0;i<n;i++){
	        j=0;
	        while(arr[i][j]!=1 && j<m){
	            j++;
	            count++;

	        }
	            
	       
	        curr =m-count;
	        
	            if(max<curr){
	            max= curr;
	            
	            row_no=i;
	        
	        }
        count=0;
	    }
	    if(max==0){
	        return -1;
	    }
	    return row_no;
	}

};