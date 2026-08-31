# Queue Reversal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a queue  **q** containing integer elements, your task is to  **reverse**  the queue.

 **Examples:** 

```
Input: q[] = [5, 10, 15, 20, 25]
Output: [25, 20, 15, 10, 5]
Explanation: After reversing the given elements of the queue, the resultant queue will be 25 20 15 10 5.

```

```
Input: q[] = [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]
Explanation: After reversing the given elements of the queue, the resultant queue will be 5 4 3 2 1.
```

 **Constraints:** 
1 ≤ q.size() ≤ 103
0 ≤ q[i] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-31T18:44:56.278Z  

```cpp
class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack<int>s;
        
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        return ;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/queue-reversal/1)