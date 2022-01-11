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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*s1,*s2,*prev;
        s1=s2=head;
        if(head==NULL || head->next==NULL)
          return NULL;
        while(s2 && s2->next){
            prev=s1;
            if(s2 && s2->next)
            {
                s2=s2->next->next;
            }
            s1=s1->next;
        } 
        
        cout<<prev->val;
        prev->next=s1->next;
        s1->next=NULL;
        s1=NULL;
        return head;
        
    }
};
