# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 40 ms (beats 65.19%)  
**Memory:** 45.4 MB (beats 55.27%)  
**Submitted:** 2026-09-06T14:22:37.491Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int total = 0;
       unordered_map<int,int>m;
       m[0] = 1;
       int prefixsum = 0;
       for(int i = 0; i<nums.size(); i++){
        prefixsum += nums[i];
        if(m.count(prefixsum-k)){
            total+= m[prefixsum-k];
            m[prefixsum]++;
        }
        else{
            m[prefixsum]++;
        }
       }
                  return total;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)