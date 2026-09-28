# Jewels and Stones

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You're given strings `jewels` representing the types of stones that are jewels, and `stones` representing the stones you have. Each character in `stones` is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so `"a"` is considered a different type of stone from `"A"`.

 

 **Example 1:** 

```
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

```

 **Example 2:** 

```
Input: jewels = "z", stones = "ZZ"
Output: 0

```

 

 **Constraints:** 

- 1 <= jewels.length, stones.length <= 50
- jewels and stones consist of only English letters.
- All the characters of jewels are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.4 MB (beats 52.60%)  
**Submitted:** 2026-09-28T18:08:01.460Z  

```cpp
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jewelSet;

        
        for (char j : jewels) {
            jewelSet.insert(j);
        }

        int count = 0;

        
        for (char s : stones) {
            if (jewelSet.count(s)) { 
                count++;
            }
        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/jewels-and-stones/)