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
        ListNode * result,*temp,*t1;
        result=NULL;
     temp=head;
        if(head==NULL)
            return NULL;
        while(temp){
            if(temp->val < x)
            {
                if(result==NULL)
                {
                    result=new ListNode(temp->val);
                    t1=result;
                   
                }
                else{
                   
                     t1->next=new ListNode(temp->val);
                    t1=t1->next;
                }
            }
            temp=temp->next;
        }
        temp=head;
         while(temp){
            if(temp->val >= x)
            {
                if(result==NULL)
                {
                    result=new ListNode(temp->val);
                    t1=result;
                   
                }
                else{
                   
                     t1->next=new ListNode(temp->val);
                    t1=t1->next;
                }
            }
            temp=temp->next;
        }
    return result;
    }
};
