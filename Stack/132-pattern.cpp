class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int k=-1e7; 
       stack<int>s;
           for(int i=nums.size()-1;i>=0;i--){
               if(nums[i]<k)
                   return true;
               else if(!s.empty() and nums[i]>s.top()){
                   k=s.top();
                   s.pop();
               }
               else
                   s.push(nums[i]);
           }
        return false;
    }
};
