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
    ListNode* oddEvenList(ListNode* head) {
    ListNode* odd,*even,*t1,*t2,*t3,*t4;
        odd=even=NULL;
        if(head==NULL || head->next==NULL)
            return head;
        t1=head;
        t2=head->next; 
        t3=odd;
        t4=even;
        while(t1 ){
            if(odd==NULL)
             {
                odd=t3=new ListNode(t1->val);
               
            }
            else{
                t3->next=new ListNode(t1->val);
                 t3=t3->next;
            }
            if(even==NULL)
             {
                even=t4=new ListNode(t2->val);
                
            }
            else{
                if(t2!=NULL){
                t4->next=new ListNode(t2->val);
                 t4=t4->next;
                }    
            }
            cout<<t1->val;
            if(t1 && t1->next)
            t1=t1->next->next;
            else if(t1 && t1->next==NULL)
                 t1=t1->next;
             if(t2 && t2->next)
            t2=t2->next->next;
        }
       
        t3->next=even;
        return odd;
    }
};
