class MyStack {
public:
    queue<int>q1;
    queue<int>q2;

    MyStack() {
        
    }
    
    void push(int x) {
        if(empty()){
            q1.push(x);
        }
        else if(!q1.empty()){
            q1.push(x);
        }
        else{
            q2.push(x);
        }
    }
    
    int pop() {
        if(empty()){
            return 0;
        }
        else if(!q1.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            int a = q1.front();
            q1.pop();
            return a;
        }
        else{
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            int b = q2.front();
            q2.pop();
            return b;
        }
    }
    
    int top() {
       if(empty()){
        return 0;
       } 
       else if(!q1.empty()){
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();

        }
        int c = q1.front();
        q2.push(q1.front());
        q1.pop();
        return c;


       }
       else{
        while(q2.size()>1){
            q1.push(q2.front());
            q2.pop();

        }
        int d = q2.front();
        q1.push(q2.front());
        q2.pop();
        return d;
       }
    }
    
    bool empty() {
       return q1.empty() && q2.empty();
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