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
    int getDecimalValue(ListNode* head) {
        int result=0;
        if (head==NULL)
            return 0;
        int count=0;
        ListNode*temp=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        cout<<count;
        count=count-1;
        while(head){
            result+=head->val* pow(2,count--);
            head=head->next;
            
        }
        return result;
        
        
    }
};
