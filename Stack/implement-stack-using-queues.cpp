class MyStack {
vector<int>v;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(v.empty())
            v.push_back(x);
        else
        v.insert(v.end(),x);
    }
    
    int pop() {
        int  x=v[v.size()-1];
        v.pop_back();
        return x;
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    bool empty() {
       return v.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
