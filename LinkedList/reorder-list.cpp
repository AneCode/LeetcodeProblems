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
      queue<int>q;
      stack<int>s;
        ListNode*temp,*s1,*s2;
        s1=s2=head;
        while(s2 && s2->next){
            if(s2 && s2->next)
                s2=s2->next->next;
            if(s1)
                s1=s1->next;
        }
        // cout<<"s1"<<s1->val;
        temp=head;
        while(temp != s1)
        {
            q.push(temp->val);
            temp=temp->next;
        }
        temp=s1;
        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
       
        while(temp){
            if(!q.empty()){
             temp->val=q.front();
                temp=temp->next;
                q.pop();
            }
            if(!s.empty()){
                temp->val=s.top();
                s.pop();
                temp=temp->next;
            }
            
        }
        
    } 
};
