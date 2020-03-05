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
    vector<int> reversePrint(ListNode* head) {
        vector<int>ans;
        ListNode*mov=head;
        while(mov!=nullptr){
            ans.push_back(mov->val);
            mov=mov->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};