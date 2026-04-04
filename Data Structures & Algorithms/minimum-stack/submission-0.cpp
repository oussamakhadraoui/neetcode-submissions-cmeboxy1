class MinStack {
public:
        stack<int>main;
        stack<int>mini;
    MinStack() {
    }
    
    void push(int val) {
        main.push(val);
        if(mini.size()){

            mini.push(min(val,mini.top()));
        }else{
            mini.push(val);
        }

    }
    
    void pop() {
        main.pop();
        mini.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
