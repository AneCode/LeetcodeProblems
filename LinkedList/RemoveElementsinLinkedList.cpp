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
    ListNode* removeElements(ListNode* head, int val) {
        auto start = std::chrono::high_resolution_clock::now();
      
        if(head==NULL)
            return NULL;
        while(head  && head->val==val){
           ListNode* temp=head;
            cout<<temp->val<<" ";
            head=head->next;
        }
        ListNode*res=head;
        while(head && head->next){
           if(head->next->val==val){
               ListNode*temp=head->next;
               while(temp && temp->val==val){
                   temp=temp->next;
               }
               head->next=temp;
               
           }
            head=head->next;
        }
         auto end = std::chrono::high_resolution_clock::now();
        auto duration = duration_cast< std::chrono::microseconds>(end - start);
        
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
        // cout<<head->val;
        return res;
    }
};
