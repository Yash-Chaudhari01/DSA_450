
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        int size =x.size();
        for(int i=0;i<size;i++){
            if(x[i]=='[' || x[i]=='{' || x[i]=='('){
                s.push(x[i]);
            }else{
                if(!s.empty()){
                    if(x[i]==']'&& s.top()!='['){
                        return false;
                    }
                    if(x[i]==')'&& s.top()!='('){
                        return false;
                    }
                    if(x[i]=='}'&& s.top()!='{'){
                        return false;
                    }
                    s.pop();
                    
                }else{
                    return false;
                }
            }
        }
        if(s.empty())
{
    return true;
}        
return false;
    }

}; 