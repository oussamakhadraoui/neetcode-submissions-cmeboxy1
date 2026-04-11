class MinStack {
public:
    vector<pair<int,int>>mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mini.empty()){
            mini.push_back({val,val});
        }else{
            mini.push_back({val,min(val,mini.back().second)});
        }
    }
    
    void pop() {
        mini.pop_back();
    }
    
    int top() {
        return mini.back().first;
    }
    
    int getMin() {
         return mini.back().second;
    }
};
