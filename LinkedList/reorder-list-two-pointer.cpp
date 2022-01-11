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
    void printL(ListNode *head){
        cout<<"List: ";
        while(head){
            cout<<head->val;
            head=head->next;
        }
    }
public:
    void reorderList(ListNode* head) {
     
        ListNode*temp,*s1,*s2;
        s1=s2=head;
        if(head==NULL || head->next==NULL)
        {
            return;
        }
        while(s2 && s2->next){
            temp=s1;
            if(s2 && s2->next)
                s2=s2->next->next;
            if(s1)
                s1=s1->next;
        }
        ListNode*prev,*curr,*Next;
        curr=s1;
        prev=Next=NULL;
        temp->next=NULL;
        temp=NULL;
        while(curr){
           Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        s1=prev;
      temp=s1;
       ListNode * t1=head;
        while(s1){
            s1=s1->next;
            temp->next=t1->next;
            t1->next=temp;
            if(t1->next->next)
            t1=t1->next->next;
            else
                t1=t1->next;
            temp=s1;
        }
        
    } 
};
