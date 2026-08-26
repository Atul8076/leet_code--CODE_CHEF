# Remove Cycle in Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the  **head** of a singly linked list. A cycle exists if the last node points back to a previous node, forming a loop. Remove the loop from the linked list if it exists.

Internally, the driver code uses a variable  **x**  (1-based indexing) to represent the position of the node to which the last node is connected.

The driver code will print "true" if the linked list is correctly modified, otherwise it will print "false".

 **Examples:** 

```
Input:

Output: true
Explanation: The linked list contains a loop that begins at node x = 2. After removing the loop, the driver code prints true.
```

```
Input:

Output: true
Explanation: The linked list does not contain a loop (x = 0).
```

```
Input: 

Output: true
Explanation: The linked list contains a loop that begins at node x = 1. After removing the loop, the driver code prints true.
```

 **Constraints:** 
1 ≤ size of linked list ≤ 105
0 ≤ x ≤ size of linked list

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-26T10:25:40.861Z  

```cpp
/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
       Node *slow = head;
        Node *fast = head;
        while(fast!= NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow!= fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                while(slow->next!= fast){
                    slow = slow->next;
                }
                slow->next = NULL;
                return ;
            }
        }
         return; 
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1)