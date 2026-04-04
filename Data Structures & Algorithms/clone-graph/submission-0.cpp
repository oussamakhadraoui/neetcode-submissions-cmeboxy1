

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>rec;
        return dfs(node,rec);
    }
    Node * dfs(Node * node,unordered_map<Node*,Node*>&rec){
        if(!node)return NULL;
        if(rec[node])return rec[node];
        Node* copy = new Node(node->val);
        rec[node]=copy;
        for(Node* n:node->neighbors){
            copy->neighbors.push_back(dfs(n,rec));
        }

        return copy;
    }
};
