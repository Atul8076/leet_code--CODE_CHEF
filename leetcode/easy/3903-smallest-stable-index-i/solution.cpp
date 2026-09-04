class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>vec;
        
        for( int i = 0; i<n; i++){
           int a=*max_element(nums.begin(),nums.begin()+i);
           int b=*min_element(nums.begin()+i,nums.end());
            if(k>=a-b) return i;
          
        }
        return -1;
    }
};