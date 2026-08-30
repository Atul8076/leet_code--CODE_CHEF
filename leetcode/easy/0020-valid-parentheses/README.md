# Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

 

 **Example 1:** 

 **Input:**  s = "()"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "()[]{}"

 **Output:**  true

 **Example 3:** 

 **Input:**  s = "(]"

 **Output:**  false

 **Example 4:** 

 **Input:**  s = "([])"

 **Output:**  true

 **Example 5:** 

 **Input:**  s = "([)]"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.9 MB (beats 37.37%)  
**Submitted:** 2026-08-30T08:59:07.673Z  

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0 ; i<s.length(); i++){
            if(s[i]== '('||s[i]== '{'|| s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return 0;
                }
                else if(s[i]==')'){
                    if(st.top() != '('){
                        return 0;
                    }
                    else{
                        st.pop();
                    }
                }
                else if(s[i]=='}'){
                    if(st.top() != '{'){
                        return 0;
                    }
                    else{
                        st.pop();
                    }
                }
                else {
                    if(st.top() != '['){
                        return 0;
                    }
                    else{
                        st.pop();
                    }
                }

                
            }
            
    }
    return st.empty();
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)