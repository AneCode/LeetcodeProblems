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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *t1,*t2,*prev,*temp;
        if(head==NULL)
           return NULL;
      t1=head;
      t2=head->next;
      prev=NULL;  
        int flag=0;
     while(t1 ){
       
        // cout<<t1->val<<t2->val<<"\n";
         if(t1 && t2 && t1->val == t2->val){
               temp=t2;
             t2=t2->next;
             temp->next=NULL;
             t1->next=t2;
             flag=1;
             continue;
         }
         if(flag==1){
             if(prev==NULL  && t2==NULL)
                 return NULL;
             temp=t1;
             t1=t2;
             if(t2)
             t2=t2->next;
             if(prev!=NULL)
             prev->next=temp->next;
             else
                 head=t1;
             temp->next=NULL;
             temp=NULL;
             flag=0;
             continue;
         }
         prev=t1;
         if(t1)
         t1=t1->next;
         if(t2)
         t2=t2->next;
     } 
        return head;
    }
};
