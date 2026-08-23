# Sort a linked list of 0s, 1s and 2s

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the  **head**  of a linked list where nodes can contain values  **0s**,  **1s,**  and  **2s** only. Your task is to  **rearrange**  the list so that all  **0s**  appear at the beginning, followed by all  **1s**, and all  **2s**  are placed at the end.

 **Examples:** 

```
Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
   
Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between. The final list will be:
   
```

```
Input: head = 2 → 2 → 0 → 1
   
Output: 0 → 1 → 2 → 2
Explanation: After arranging all the 0s, 1s and 2s in the given format, the output will be:
   
```

 **Constraints:** 
1 ≤ no. of nodes ≤ 106
0 ≤ node->data ≤ 2

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T17:18:28.538Z  

```cpp
/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node *curr = head ;
        int count0 =0, count1 = 0, count2 = 0;
        while(curr){
            if(curr->data == 0){
                count0++;
                curr = curr->next;
            }
            else if(curr->data == 1){
                count1++;
                curr = curr->next;
            }
            else{
                count2++;
                curr = curr->next;
            }
        }
        Node *temp = head;
        while(count0--){
            temp->data = 0;
            temp = temp->next;
        }
        while(count1--){
            temp->data = 1;
            temp = temp->next;
        }
        while(count2--){
            temp->data = 2;
            temp = temp->next;
        }
        return head ;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1)