# Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

 **Example 1:** 

```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

```

 **Example 2:** 

```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is a printable ascii character.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 6.43%)  
**Memory:** 28.1 MB (beats 5.28%)  
**Submitted:** 2026-08-29T09:29:33.162Z  

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(int i = 0; i<s.size(); i++){
            st.push(s[i]);
        }
        int i =0;
        while(!st.empty()){
            s[i]  = st.top();
            i++;
            st.pop();
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)