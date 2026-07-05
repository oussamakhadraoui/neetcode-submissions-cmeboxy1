/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node*solve(Node* node,unordered_map<Node*,Node*>&rec){
        if(!node)return NULL;
        if(rec[node])return rec[node];
        Node* clone=new Node(node->val);
        rec[node]=clone;
        for(Node* n:node->neighbors){
            clone->neighbors.push_back(solve(n,rec));
        }
        return clone;

    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>rec;
        return solve(node,rec);
    }
};
