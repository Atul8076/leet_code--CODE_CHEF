# Intersection in Y Shaped Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the heads of two non-empty singly linked lists,  **head1**  and  **head2**, return the node where the two linked lists intersect. It is guaranteed that an intersection always exists.

 **Note:**  The custom input contains a non-empty list common. Initially, head1 and head2 do not share any node. The last node of each list is then connected to the head of common, creating an intersection at the first node of common.

 **Examples:** 

```
Input: head1: 10 -> 15 -> 30, head2: 3 -> 6 -> 9 -> 15 -> 30
Output: 15
Explanation: From the image, it is clear that the common part is 15 -> 30, and its starting node is 15.

```

```
Input: head1: 4 -> 1 -> 8 -> 5, head2: 5 -> 6 -> 1 -> 8 -> 5
Output: 1
Explanation: From the image, it is clear that the common part is 1 -> 8 -> 5, and its starting node is 15.

```

**Constraints:
**2 ≤ total number of nodes ≤ 2*105
-104 ≤ node->data ≤ 104

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-26T17:06:06.565Z  

```cpp
/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  code here
     Node *headA = head1;
     Node *headB = head2;
     int count1 = 0, count2 = 0;
     while(headA){
         count1++;
         headA = headA->next;
     }
      while(headB){
         count2++;
         headB = headB->next;
     }
     headA = head1, headB = head2;
     while(count2>count1){
         headB = headB->next;
         count2--;

     }
     while(count1>count2){
         headA = headA->next;
         count1--;
     }
     while(headA != headB){
         headA = headA->next;
         headB = headB->next;
     }
     
     return headB;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)