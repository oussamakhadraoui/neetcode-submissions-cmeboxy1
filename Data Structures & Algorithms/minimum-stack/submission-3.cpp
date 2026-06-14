class MinStack {
public:
    vector<pair<int,int>> rec;
    MinStack() {
        
    }
    
    void push(int val) {
       if(rec.size()==0){
            rec.push_back({val,val});
       }else{
            rec.push_back({val,min(val,rec.back().second)});
       }
    }
    
    void pop() {
        rec.pop_back();
    }
    
    int top() {
        return rec.back().first;
    }
    
    int getMin() {
        return rec.back().second;
    }
};
