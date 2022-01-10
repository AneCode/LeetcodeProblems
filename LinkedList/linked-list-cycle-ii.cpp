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
    ListNode *detectCycle(ListNode *head) {
     if(head ==NULL)
         return NULL;
        ListNode*hear,*turtle;
        hear=turtle=head;
        int flag=0;
          hear=hear->next->next;
            turtle=turtle->next;
        while (hear && hear->next){
            cout<<"LOOP value:t"<<turtle->val<<"  r:"<<hear->val<<endl;  
            if(hear==turtle)
            {
                flag=1;
                break;
            }
            hear=hear->next->next;
            turtle=turtle->next;
        }
         cout<<turtle->next->val<<":"<<hear->next->val<<endl;
        if(flag==0)
            return  NULL;
        else
        {
            // cout<<turtle->val;
            // cout<<hear->val;
            turtle=head;
            if(turtle==hear)
                return hear; 
            while(turtle->next!=hear->next)
            {
                turtle=turtle->next;
                hear=hear->next;
            }
            cout<<turtle->next->val<<":"<<hear->next->val<<endl;
            return turtle->next;
        
        } 
            
        // return NULL;    
    }
};
