#include<cstring>
class TrieNode{
    public:
    bool isCompleted;
    TrieNode* children[26];
    TrieNode(){
        memset(children,0,sizeof(children));
        isCompleted=false;
    }
};
class PrefixTree {
public:
    TrieNode* root;
    PrefixTree() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *clone=root;
        for(char &c:word){
            int index= c-'a';
            if(clone->children[index]==NULL)clone->children[index]=new TrieNode();
            clone=clone->children[index];
        }
        clone->isCompleted=true;
    }
    
    bool search(string word) {
        TrieNode*clone= root;
        for(char&c:word){
            int index= c-'a';
            if(clone->children[index]==NULL)return false;
            clone=clone->children[index];
        }
        return clone->isCompleted;
    }
    
    bool startsWith(string prefix) {
        TrieNode*clone= root;
        for(char&c:prefix){
            int index= c-'a';
            if(clone->children[index]==NULL)return false;
            clone=clone->children[index];
        }
        return true;
    }
};
