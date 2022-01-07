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
    void print(vector<int>v){
       for(auto i:v){
           cout<<i;
       } 
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * Result,*temp;
        Result=temp=NULL;
       priority_queue<int, vector<int>, greater<int>>p;
        
        for(int i=0;i<lists.size();i++){
           while(lists[i]){
               p.push(lists[i]->val);
               lists[i]=lists[i]->next;
            
           }
        }
        while(p.size()){
            if(temp==NULL){
                Result=temp=new ListNode(p.top());
            }
            else{
                temp->next=new ListNode(p.top());
                temp=temp->next;
            }
            p.pop();
        } 
          cout<<p.size();                     
       
        return Result;
    }
};
