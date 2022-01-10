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
    ListNode* middleNode(ListNode* head) {
        ListNode *hear ,*turtle;
        hear=turtle=head;
        if(head==NULL)
            return head;
        while(hear  && hear->next){
            hear=hear->next->next;
            turtle=turtle->next; 
        }
        // cout<<turtle->val;
        hear=NULL;
        return turtle;
    }
};
