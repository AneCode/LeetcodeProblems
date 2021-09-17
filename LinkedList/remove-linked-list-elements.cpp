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
      ListNode *res=NULL,*temp=NULL;
        while(head){
            if(head->val!=val){
                if(res==NULL){
                    res=new ListNode(head->val);
                    temp=res;
                }
                else{
                    res->next=new ListNode(head->val);
                    res=res->next;
                }
            }
           head=head->next; 
        }
         auto end = std::chrono::high_resolution_clock::now();
        auto duration = duration_cast< std::chrono::microseconds>(end - start);
        
    // cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;
        return temp;
    }
};
