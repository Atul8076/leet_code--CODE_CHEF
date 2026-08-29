class Solution {
  public:
    stack<int> insertAtBottom(stack<int> &st, int x) {
        // code here
        stack<int>st1;
        stack<int>st2;
        while(!st.empty()){
            st1.push(st.top());
            st.pop();
        }
        // while(!st1.empty()){
        //     st2.push(st1.top());
        //     st1.pop();
        // }
        st.push(x);
        while(!st1.empty()){
            st.push(st1.top());
            st1.pop();
        }

        return st;

    }
};