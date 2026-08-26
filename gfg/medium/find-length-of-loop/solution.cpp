/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node *slow = head;
        Node *fast = head;
        while(fast!= NULL && fast->next!= NULL){
            slow = slow->next;
            fast= fast->next->next;
            if(slow == fast ){
                int count = 1;
                Node *temp = slow;
                temp= temp->next;
                while(temp!= slow){
                    count++;
                    temp = temp->next;
                }
                return count;
            }
        }
        return 0;
    }
};