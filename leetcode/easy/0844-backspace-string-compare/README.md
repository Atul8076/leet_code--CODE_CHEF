# Backspace String Compare

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true`  *if they are equal when both are typed into empty text editors*. `'#'` means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

 **Example 1:** 

```
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

```

 **Example 2:** 

```
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

```

 **Example 3:** 

```
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".

```

 

 **Constraints:** 

- 1 <= s.length, t.length <= 200
- s and t only contain lowercase letters and '#' characters.

 

 **Follow up:**  Can you solve it in `O(n)` time and `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.4 MB (beats 68.76%)  
**Submitted:** 2026-08-30T09:22:40.862Z  

```cpp
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1,s2;
        for(char c: s){
            if(c != '#'){
                s1.push(c);
            }
            else{
                if(!s1.empty()){
                    s1.pop();
                }
            }
        }
        for(char c: t){
            if(c != '#'){
                s2.push(c);
            }
            else{
                if(!s2.empty()){
                    s2.pop();
                }
            }
        }
        return s1 == s2;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/backspace-string-compare/)