/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* ReverseResult( ListNode*  left,ListNode *right,ListNode*right_1){
         ListNode* prev,*curr,*Next;
        prev=Next=NULL;
        curr=left;
        while(curr){
            if(right_1 && curr== right_1)
                break;
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        
       return prev; 
        
    }
    ListNode* reverseBetween(ListNode* head, int l, int r) {
      if(head==NULL)
          return NULL;
        if(left ==right){
            return head;
        }
     int count=1;
        ListNode* temp,*right,*left,*right_1,*left_1;
        right=NULL;
        left=NULL;
        left_1=right_1=NULL;
        temp=head;
        while(temp){
            if(count==(l-1)){
                left_1=temp;
            }
            if(count==l){
                left=temp;
            }
            if(count==r){
              right=temp;
                right_1=temp->next; 
            }
            temp=temp->next;
            count++;
        }
        if(left_1!=NULL){
        left_1->next=ReverseResult(left,right,right_1);
        left->next=right_1;
        }
        else {
            cout<<left->val;
            head=ReverseResult(left,right,right_1);
            cout<<head->val;
            left->next=right_1;
            
        }
    // cout<<left_1->val<<right_1->val<<left->val<<right->val;
        return head;
  }
};
