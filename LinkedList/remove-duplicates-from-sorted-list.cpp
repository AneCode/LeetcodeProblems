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
    int flag=0;
        ListNode*temp=NULL,*res=NULL;
        temp=res=head;
        if(head==NULL)
            return NULL;
        
        while(head){
            head=temp;
            if(temp)  
            temp=temp->next;
            while(temp && temp->val==head->val){
                temp=temp->next;
            }
            if(head)
            head->next=temp;       
        }
      return res;  
    }
};
