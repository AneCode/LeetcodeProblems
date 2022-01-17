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
      ListNode * reverse(ListNode* head){
          ListNode*curr,*Next,*prev;
          Next=prev=NULL;
          curr=head;
          while(curr){
              Next=curr->next;
              curr->next=prev;
              prev=curr;
              curr=Next;
          }
          return prev;
      }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         l1=reverse(l1);
        l2=reverse(l2);
       ListNode *res,*temp;
        res=temp=NULL;
        int sum,acc=0;
        sum=0;
        while(l1 &&  l2){
            sum=acc+ l1->val + l2->val;
            acc=0;
            if(sum>9){
                acc++;
                sum-=10;
            }
            if(res==NULL)
            {
                res=temp=new ListNode(sum);
            } 
            else{
                temp->next=new ListNode(sum);
                temp=temp->next;
            }
            l1=l1->next;
            l2=l2->next;
        } 
        int flag=(l1==NULL)?2:1;
        if(flag==1){
            while (l1){
                 sum=acc+ l1->val;
            acc=0;
            if(sum>9){
                acc++;
                sum-=10;
            }
           
                temp->next=new ListNode(sum);
                temp=temp->next;
                 l1=l1->next;
            }
        }
         if(flag==2){
            while (l2){
                 sum=acc+ l2->val;
            acc=0;
            if(sum>9){
                acc++;
                sum-=10;
            }
           
                temp->next=new ListNode(sum);
                temp=temp->next;
                 l2=l2->next;
            }
        }
        
        if(acc){
             temp->next=new ListNode(acc);
        }
        return reverse(res);
    }
};
