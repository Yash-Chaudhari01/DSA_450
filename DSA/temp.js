#include<iostream>
#include<string>
using namespace std;

class Solution {
    public:
    bool IsPalindrome(int start,int end,string s){
      while(start<=end){
          if(s[start] != s[end]){
              return false;
          }
          start++;
          end--;
      } 
      return true;
    }
  
    string longestPalin (string S) {
        // code here
        int ans=INT_MIN;
        int first=0;
        int last=0;
        int size=S.size();
        for(int i=size-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                bool check=IsPalindrome(j,i,S);
                if(check){
                    if(ans<i-j){
                        ans=i-j;
                        first=j;
                        last=i;
                    }
                }
            }
        }

        string str="";
          if(first ==0 && last ==0){
             str=str+S[0];
            return str;
        }
        for(int i=first;i<=last;i++){
            str=str+S[i];
            
        }
          
        return str;
    }
};


int main(){

   
    return 0;
}