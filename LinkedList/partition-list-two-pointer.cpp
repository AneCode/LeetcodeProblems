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
    ListNode* partition(ListNode* head, int x) {
        ListNode * t1,*temp,*t2;
        if(head==NULL)
            return NULL;
        t1=t2=temp=NULL;
        t2=head;
        if(head->val <x){
            t1=head;
        }
       int flag=0;
             while(t2 ){
                 if(t2  && t2->val >=x)
                     flag=1;
                 if(t2->next  && t2->next->val< x)
                 {
                     cout<<"E";
                     temp=t2->next;
                     t2->next=temp->next; 
                     temp->next=NULL;
                     if(t1==NULL){
                        t1=temp;
                         t1->next=head;
                         head=t1;
                     }
                     else{
                         temp->next=t1->next;
                         t1->next=temp;
                         t1=t1->next;
      
                     } 
                     temp=NULL;
                     if(flag==1)
                     continue;
                 }
                 t2=t2->next;
             }
        
        return head;
    }
};
