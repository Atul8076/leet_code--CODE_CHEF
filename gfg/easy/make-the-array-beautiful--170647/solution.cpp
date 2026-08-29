class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(int i = 0; i<arr.size(); i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else if(arr[i]>=0){
                if(st.top()>=0){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                }
            }
            else{
                if(st.top()<0){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                }
            }
        }
        int n = st.size();
        vector<int>arr1(n);
        for(int i = n-1; i>=0; i--){
            arr1[i] = st.top();
            st.pop();
        }
        return arr1;
        
    }
};