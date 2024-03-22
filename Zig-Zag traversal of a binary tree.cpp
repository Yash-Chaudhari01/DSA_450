class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	queue<Node*>q;
    	bool LeftToRight=true;
    	
    	if(root == NULL){
    	    return ans;
    	}
    	q.push(root);
    	while(!q.empty()){
    	    int size =q.size();
    	    vector<int>arr(size);
    	    for(int i=0;i<size;i++){
    	        Node *front=q.front();
    	        q.pop();
    	        int index=LeftToRight ? i :size-i-1;
    	        arr[index]=front->data;
    	        if(front->left){
    	            q.push(front->left);
    	        }
    	        if(front->right){
    	            q.push(front->right);
    	        }
    	    }
    	    LeftToRight=!LeftToRight;
    	    for(auto i : arr){
    	        ans.push_back(i);
    	    }
    	}
    	return ans;
    }
};