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