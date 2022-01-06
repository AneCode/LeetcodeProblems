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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
         int count=0;
        ListNode  * L1=head;
        while(L1){
            L1=L1->next;
            count++;
        }
       int position=count-n+1;
        ListNode * temp=head;
        if(position==1){
         head=head->next;
            temp=NULL;
            return head;
        }
        
 temp=head;
        count=1;
        while(count<position-1){
            temp=temp->next;
            count++;
        }
        ListNode* temp2=temp->next;
        temp->next=temp2->next;
        
        return head;
        
        
    }
};
