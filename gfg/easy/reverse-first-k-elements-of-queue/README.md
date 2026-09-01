# Reverse first K of a Queue

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer **k** and a queue of integers, we need to reverse the order of the first k elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

- enqueue(x) : Add an item x to rear of queue
- dequeue() : Remove an item from front of queue
- size() : Returns number of elements in queue.
- front() : Finds front item.

 **Note:**  

- The above operations represent the general processings.
- In-built functions of the respective languages can be used to solve the problem.
- If the size of queue is smaller than the given k, then return the original queue.

 **Examples:** 

```
Input: q = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 4, 5]
Explanation: After reversing the first 3 elements from the given queue the resultant queue will be [3, 2, 1, 4, 5]
```

```
Input: q = [4, 3, 2, 1], k = 4
Output: [1, 2, 3, 4] 
Explanation: After reversing the first 4 elements from the given queue the resultant queue will be [1, 2, 3, 4] 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-01T14:42:44.649Z  

```cpp
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

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1)