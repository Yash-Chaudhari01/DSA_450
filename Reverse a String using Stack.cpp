

//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char>stc;
   
    for(int i=0;i<len;i++){
        stc.push(S[i]);
    };
   for(int i=0;i<len;i++){
       S[i]=stc.top();
       stc.pop();
   }
    return S;
}