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
        int cnt=0;
        ListNode*mov=head;
        while(mov!=NULL){
            cnt++;
            mov=mov->next;
        }
        if(k>cnt)
        return NULL;
        mov=head;
        while(cnt!=k){
            cnt--;
            mov=mov->next;
        }
        return mov;
    }
};