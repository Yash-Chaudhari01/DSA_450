// User function template for C++

// trie node
/*
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};
*/
class Solution{
    public:
        void insert(struct TrieNode *root, string key){
            if(key.size() == 0){
                root->isLeaf = true;
                return;
            }
            
            int index = key[0]-'a';
            
            if(root->children[index] == NULL){  
                root->children[index] = getNode();  
            }
            
            insert(root->children[index],key.substr(1));
        }
        
        bool search(struct TrieNode *root, string key) {
            if(key.size() == 0){
                return root->isLeaf;
            }
            
            int index = key[0]-'a';
            if(root->children[index] != NULL){    
                return search(root->children[index],key.substr(1));
            }   
            else{
                return false;
            }
        }
};