#include<cstring>
class TrieNode{
    public:
    bool isComplete;
    TrieNode* children[26];

    TrieNode(){
        isComplete=false;
        memset(children,NULL,sizeof(children));
    }
};
class PrefixTree {
public:
    TrieNode*root;
    PrefixTree() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode*clone=root;
        for(char&c:word){
            int index=c-'a';
            if(!clone->children[index])clone->children[index]=new TrieNode();
            clone=clone->children[index];
        }
        clone->isComplete=true;
    }
    
    bool search(string word) {
        TrieNode*clone=root;
        for(char&c:word){
            int index=c-'a';
            if(!clone->children[index])return false;
            clone=clone->children[index];
        }
        return clone->isComplete;        
    }
    
    bool startsWith(string prefix) {
        TrieNode*clone=root;
        for(char&c:prefix){
            int index=c-'a';
            if(!clone->children[index])return false;
            clone=clone->children[index];
        }
        return true;             
    }
};
