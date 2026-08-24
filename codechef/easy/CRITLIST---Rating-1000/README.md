# CRITLIST - Rating 1000

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Critical points in a Linked List

Given the head of a linked list, Find the number of critical points. (The starting and end are not considered critical points).

Local minima or maxima are called critical points.

A Node is called a local minima if both next and previous elements are greater than the current element.

A Node is called a local maxima if both next and previous elements are smaller than the current element.

### Constraints
- $1 \leq$ Number of elements in the linked list, $N$ $\leq 10^5$
- $1 \leq Node.data \leq 10^9$
### Sample 1:
Input
Output

```
8
1 2 3 3 3 5 1 3

```

```
2 
```

### Explanation:

1 is a minima and 5 is a maxima hence there are 2 critical points

### Sample 2:
Input
Output

```
7
1 2 3 2 1 3 2 
```

```
3
```

### Explanation:

3rd node, 5th node and 6th node are the critical nodes, hence the answer is 3

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-24T15:45:14.939Z  

```c_cpp
/*
Node is defined as:
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
      this->data = data;
      this->next = nullptr;
  }
}
*/
int solve(Node* head){
Node *temp1 = head;

Node *temp2 = head;
temp2 = head->next;

int minima = 0;
int maxima = 0;

    if ( head->next == NULL || head->next->next == NULL){
        return 0;
    }
    while(temp2->next!= NULL){
    if(temp1->data < temp2->data && temp2->next->data<temp2->data){
        minima++;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    else if(temp1->data > temp2->data && temp2->next->data>temp2->data){
        maxima++;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    else {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    }
    return maxima+minima;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CRITLIST)