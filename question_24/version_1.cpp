
  class Solution {
  public:
	  ListNode* reverseList(ListNode* head) {
		  ListNode*before=NULL;
          ListNode*now=head;
          ListNode*after=NULL;
          if(head==NULL||head->next==NULL)
              return head;
          
          while(now!=NULL){
              ListNode*t=now->next;
              if(t==NULL){
                  after=now;
                  
              }
                  
              now->next=before;
              before=now;
              now=t;
          }
          return after;
	  }
  };




