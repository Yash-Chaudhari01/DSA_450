/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int r=0, temp=0, c=0, pal=0;
         for(int i=0; i<n; i++){
        temp = a[i];
        pal =0;
        while(temp != 0){
            r = temp % 10;
            pal = pal * 10 + r;
            temp = temp / 10;
        }
        if(pal == a[i]){
            c++;
        }
    }
    if(n == c){
        return 1;
    }
    else return 0;

    }
};