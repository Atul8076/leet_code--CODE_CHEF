/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *head1 = headA;
        ListNode *head2 = headB;
        int count1 = 0, count2 = 0;
        while(head1){
            count1++;
            head1 = head1->next;
        }
         while(head2){
            count2++;
            head2 = head2->next;
        }
        head1 = headA, head2 = headB;
        while(count2>count1){
            head2 = head2->next;
            count2--;

        }
        while(count1>count2){
            head1 = head1->next;
            count1--;
        }
        while(head1 != head2){
            head1 = head1->next;
            head2 = head2->next;
        }
        return head1;
    }
};