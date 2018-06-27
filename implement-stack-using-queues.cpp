class MyStack {
    queue<int> q1, q2;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(!q1.empty())  q1.push(x);
        else if(!q2.empty())    q2.push(x);
        else
            q1.push(x);
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.empty()){
            while(!q2.empty()){
                int front = q2.front();
                q2.pop();
                if(q2.empty())  return front;
                q1.push(front);
            }
        }
        else{
            while(!q1.empty()){
                int front = q1.front();
                q1.pop();
                if(q1.empty())  return front;
                q2.push(front);
            }
        } 
    }
    
    /** Get the top element. */
    int top() {
        if(q1.empty()){
            while(!q2.empty()){
                int front = q2.front();
                q1.push(front);
                q2.pop();
                if(q2.empty())  return front;
            }
        }
        else{
            while(!q1.empty()){
                int front = q1.front();
                q2.push(front);
                q1.pop();
                if(q1.empty())  return front;
            }
        }         
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty() && q2.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */