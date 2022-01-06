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
    ListNode * Reverse(ListNode* head){
        ListNode *curr,*prev,*next;
        prev=next=NULL;
        curr=head;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        } 
    
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        ListNode * l1,*l2;
        ListNode * temp ;
        temp=head;
        if(head==NULL)
            return head;
        while(temp){
            temp=temp->next;
            count++;
        }
        k=k%count;
        if(k==0)
            return head;
       int limit=count-k;
        temp=head;
        if(limit==0)
            return head;
        while(limit>1){
            temp=temp->next;
            limit--;
        }
        l2=temp->next;
        temp->next=NULL;
        l1=head;
        temp=l2;
        while(temp->next!=NULL){
            temp=temp->next;
        } 
        temp->next=l1;
        
        ListNode *result=NULL;
        return l2;
    }
};
