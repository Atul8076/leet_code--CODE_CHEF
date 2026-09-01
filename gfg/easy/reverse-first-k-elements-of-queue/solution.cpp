class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if (k <= 0 || k > q.size()) {
            return q;
        }

        stack<int> st;

        while (k--) {
            st.push(q.front());
            q.pop();
        }

        int n = q.size();

        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        while (n--) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};
