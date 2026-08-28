# Add Two Numbers II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two  **non-empty**  linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

 **Example 1:** 

```
Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]

```

 **Example 2:** 

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]

```

 **Example 3:** 

```
Input: l1 = [0], l2 = [0]
Output: [0]

```

 

 **Constraints:** 

- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
- It is guaranteed that the list represents a number that does not have leading zeros.

 

 **Follow up:**  Could you solve it without reversing the input lists?

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 17.71%)  
**Memory:** 76.9 MB (beats 68.12%)  
**Submitted:** 2026-08-28T07:12:28.311Z  

```cpp
class Solution {
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseList(l1);
        l2 = reverseList(l2);

        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        ListNode* result = reverseList(dummyHead->next);
        delete dummyHead;
        return result;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/add-two-numbers-ii/)