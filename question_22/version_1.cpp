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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode*before=head;
        ListNode*after=head;
        int t=k-1;
        while(t>0){
            t--;
            before=before->next;
        }
        while(before->next!=NULL){
            after=after->next;
            before=before->next;
        }
        return after;
    }
};