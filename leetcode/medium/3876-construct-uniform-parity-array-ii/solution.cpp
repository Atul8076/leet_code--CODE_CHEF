class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd_count = 0;
        int min_val = nums1[0];

        for (int x : nums1) {
            if (x % 2 != 0) {
                odd_count++;
            }
            if (x < min_val) {
                min_val = x;
            }
        }

        if (odd_count == 0 || odd_count == nums1.size()) {
            return true;
        }

        if (min_val % 2 != 0) {
            return true;
        }

        return false;
    }
};
