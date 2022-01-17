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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int acc=0,sum=0;
        ListNode*res;
        res=NULL;
        stack<int>s1,s2;
        while(l1){
            s1.push(l1->val);
              l1=l1->next;
        }
        while(l2){
            s2.push(l2->val);
              l2=l2->next;
        } 
         while(!s1.empty() &&  !s2.empty()){
                  sum= acc+s1.top()+s2.top();
                acc=0;
                  if(sum>9)
                  {
                      acc++;
                      sum-=10;
                      
                  } 
             if(res==NULL){
                 res=new ListNode(sum);
             }
             else{
                ListNode * temp=new ListNode(sum);
                 temp->next=res;
                 res=temp;
             }
             s1.pop();
             s2.pop();
         }
       int flag=s1.empty()?2:1;
        if(flag==1){
            while(!s1.empty()){
                sum=acc+s1.top();
                acc=0;
                 if(sum>9)
                  {
                      acc++;
                      sum-=10;
                      
                  } 
                ListNode * temp=new ListNode(sum);
                 temp->next=res;
                 res=temp;
                s1.pop();
            }
        }
       if(flag==2){
           while(!s2.empty()){
                sum=acc+s2.top();
                acc=0;
                 if(sum>9)
                  {
                      acc++;
                      sum-=10;
                      
                  } 
                ListNode * temp=new ListNode(sum);
                 temp->next=res;
                 res=temp;
                s2.pop();
            }
       }
        if(acc){
        ListNode * temp=new ListNode(acc);
                 temp->next=res;
                 res=temp;
        }
      return res;  
    }
};
